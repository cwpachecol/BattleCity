#include <iostream>
#include "GameManager.h"
#include "SistemaRenderizacion.h"

//#include "Tanque.h"
//#include "Bala.h"
//#include "./Escenario/MuroLadrillo.h"
//#include "./Escenario/MuroMetal.h"
//#include <conio.h>
//#include <stdio.h>
//#include <time.h>
//#include "Municion.h"

using namespace std;
//
//Tanque t01(10, 10, "[]-T-[]", 7, 1, 0, 0, 1, 3, 100);
//Bala b01(5, 5, "o", 1, 1, 0, 1, 1, Direccion::abajo, EstadoMunicion::Inactivo, "`.'", 10);
//Tanque t02(20, 20, "[]-I-[]", 7, 1, 0, 0, 1, 3, 100);
//MuroLadrillo m01;
//MuroLadrillo m02;
//int dx = 0;
//int dy = 0;
//
//bool gameOver = false;
//
////metodo de control de teclas para hacer distintas operaciones en el juego
//bool Tecla() {
//	bool teclaPresionada = false;
//	
//	char key = ';';
//
//	if (_kbhit()) {
//		key = _getch();
//	}
//
//	if (key == 75) {
//		teclaPresionada = true;
//		dx = -1;
//	}
//
//	if (key == 72) {
//		teclaPresionada = true;
//		dy = -1;
//	}
//
//	if (key == 77) {
//		teclaPresionada = true;
//		dx = 1;
//	}
//
//	if (key == 80) {
//		teclaPresionada = true;
//		dy = 1;
//	}
//
//	if (key == 27) {
//		gameOver = true;
//	}
//
//	if (key == 13) {
//		b01.setDx(0);
//		b01.setDy(1);
//		b01.Disparar();
//		b01.Mostrar();
//		b01.Mover();
//	}
//	return teclaPresionada;
//}
//
//

int main()
{
	//SistemaRenderizacion sistemaRenderizacion;
	/*sistemaRenderizacion.inicializar();
	sistemaRenderizacion.limpiar();
	sistemaRenderizacion.dibujarCaracter(15, 15, '%', ColorConsola_Amarillo, ColorConsola_Blanco);
	sistemaRenderizacion.dibujarTexto(2, 2, "Hola mundo", ColorConsola_Azul, ColorConsola_Cafe);*/

	
	GameManager gameManager;

	gameManager.configurarSistema();
	gameManager.inicializar();

	while (gameManager.bucle());
	gameManager.abandonarJuego();
	

	/*t01.Mostrar();
	t02.Mostrar();

	m01.setAvatar("=");
	m01.setX(2);
	m01.setY(3);
	m01.setAncho(15);
	m01.setAlto(2);
	m01.Mostrar();

	m02.setAvatar("=");
	m02.setX(20);
	m02.setY(2);
	m02.setAncho(3);
	m02.setAlto(20);
	m02.Mostrar();

	t01.Mostrar();
	dx = t01.getDx();
	dy = t01.getDy();
	while (!gameOver) {
		if (Tecla()) {
			t01.setDx(dx);
			t01.setDy(dy);
			
			t01.Mover();
		}

		if (b01.getEstado() == EstadoMunicion::EnCurso) {
			b01.Mover();
		}
		dx = 0;
		dy = 0;
	}
*/

	/*cout << "---------------------" << endl;
	cout << "USFX Battle City 2020" << endl;
	cout << "---------------------" << endl;*/

	//sistemaRenderizacion.limpiar();

	cout << "Despues de limpiar" << endl;


	cin.get();
	return 0;
}