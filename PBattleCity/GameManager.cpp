#include "GameManager.h"
#include <cstdlib>
#include <cstdio>
#include <cmath>

void GameManager::renderizar()
{
	// Frame inicial
	sistemaRenderizacion.limpiar();

	//Dibujar todos los actores del juego
	int contadorActores = 0;
	for (int i = 0; i < numeroMaximoActores; i++) {
		if (actores[i] != 0)
		{
			actores[i]->renderizar(&sistemaRenderizacion);
			contadorActores++;
		}
	}

	//Dibuja actores contados
	char buffer[64];
	sprintf_s(buffer, "Objectos: %d", contadorActores);
	sistemaRenderizacion.dibujarTexto(0, 0, buffer, ColorConsola_Gris, ColorConsola_Negro);

	//Dibujar Interface de Usuario
	for (int f = 0; f < filasPantalla; f++) {
		for (int c = columnasNivel; c < columnasPantalla; c++)
			sistemaRenderizacion.dibujarCaracter(f, c, ' ', ColorConsola_GrisOscuro, ColorConsola_GrisOscuro);
	}

	//Dibujar los demas elementos del juego

	sistemaRenderizacion.dibujarTexto(5, 71, "Jugador 1", ColorConsola_Blanco, ColorConsola_AzulOscuro);
	if (jugador1) {
		int co = 71;
		int fo = 6;
		int c = 0;
		int f = 0;

		sistemaRenderizacion.dibujarCaracter(fo + f, co + c, 3, ColorConsola_Amarillo, ColorConsola_Cafe);
	}

	sistemaRenderizacion.ejecutar();
}

void GameManager::actualizar(float _dt)
{
	for (int i = 0; i < numeroMaximoActores; i++) {
		if (actores[i] != 0) {
			actores[i]->actualizar(_dt);
		}
	}

	// La base se ha destruido
	// Se ha destruido jugador 1
	// Se ha destruido jugador 2
	// Se han destruido los enemigos
}

GameManager::GameManager()
{
	juegoActivo = true;
	relojUltimoFrame = 0;

	for (int i = 0; i < numeroMaximoActores; i++) {
		actores[i] = 0;
	}

	base = 0;
	jugador1 = 0;
	jugador2 = 0;

	contadorEnemigosMuertos = 0;
}

void GameManager::configurarSistema()
{
	srand(time(0));
	sistemaRenderizacion.inicializar();
}

void GameManager::inicializar()
{
	abandonarJuego();
	contadorEnemigosMuertos = 0;

	for (int f = 0; f < filasNivel; f++) {
		for (int c = 0; c < columnasNivel; c++) {
			unsigned char celdaSimbolo = datosNivel0[f][c];
			switch (celdaSimbolo)
			{
			case celdaSimbolo_LadrilloPared:
			{
				//Aqui se crea un actor ladrillo pared.
				break;
			}
			case celdaSimbolo_MetalPared:
			{
				//Aqui se crea un actor bloque metal pared.
				break;
			}
			case celdaSimbolo_Base:
			{
				//Aqui se crea un actor base.
				break;
			}
			case celdaSimbolo_Jugador1:
			{
				//Aqui se crea un actor jugador 1.
				break;
			}
			case celdaSimbolo_Jugador2:
			{
				//Aqui se crea un actor jugador 2.
				break;
			}
			case celdaSimbolo_GeneradorEnemigo:
			{
				//Aqui se crea un actor generador de enemigos.
				break;
			}
			}
		}
	}
}
bool GameManager::bucle()
{
	//Calculo del tiempo delta
	clock_t relojAhora = clock();
	clock_t deltaReloj = relojAhora - relojUltimoFrame;
	float deltaTiempo = float(deltaReloj) / CLOCKS_PER_SEC;
	relojUltimoFrame = relojAhora;

	renderizar();
	actualizar(deltaTiempo);
	return juegoActivo;
}

void GameManager::abandonarJuego()
{
	for(int i = 0; i < numeroMaximoActores; i++){
		if (actores[i] != 0) {
			delete actores[i];
			actores[i] = 0;
		}
	}
}
