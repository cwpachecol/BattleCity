#include "Municion.h"
#include "Nivel.h"

Municion::Municion() {
	tipoActor = TipoActor_Municion;
	tipoActorPropietario = TipoActor_None;

	velocidad = velocidadMunicion;
	setImagen(imagenMunicion, ColorConsola_Gris, ColorConsola_Negro);
}

void Municion::renderizar(SistemaRenderizacion* _sistemaRenderizacion)
{
	int fila = int(y);
	int columna = int(x);
	_sistemaRenderizacion->dibujarCaracter(fila, columna, imagen.simbolo, imagen.colorSimbolo, imagen.colorFondo);
}

void Municion::actualizar(float _dt) {
	Actor::actualizar(_dt);
}

void Municion::intersectar(Actor* _actor) {
	//Destruirse a si mismo
	setEnergia(0);

	//Dañar el objetivo
	_actor->hacerDano(1);
}