#include "Tanque.h"
#include "Bala.h"
#include <map>
#include <vector>

Tanque::Tanque()
{
	setTipoActor(TipoActor_Tanque);
	setAncho(tamanoTanque);
	setAlto(tamanoTanque);
	velocidad = 0;
	fuegoTiempoEnfriamiento = 0.0;
	setDireccion(Direccion_Arriba);
	//setColor(ColorConsola_GrisOscuro, ColorConsola_Gris);
	//setImagen(ColorConsola_Verde, ColorConsola_Gris);
}

void Tanque::actualizar(float _dt)
{
	
	if (fuegoTiempoEnfriamiento > 0)
		fuegoTiempoEnfriamiento -= _dt;
	Actor::actualizar(_dt);

}

void Tanque::renderizar(SistemaRenderizacion* _sistemaRenderizacion)
{
	Actor::renderizar(_sistemaRenderizacion);
}


void Tanque::mover(Direccion _direccion)
{
	setDireccion(_direccion);

	setXVelocidad(0);
	setYVelocidad(0);

	switch (getDireccion())
	{
	case Direccion_Izquierda: setXVelocidad(-velocidad); break;
	case Direccion_Derecha: setXVelocidad(velocidad); break;
	case Direccion_Arriba: setYVelocidad(-velocidad); break;
	case Direccion_Abajo: setYVelocidad(velocidad); break;
	}
}

void Tanque::disparar()
{
	if (fuegoTiempoEnfriamiento > 0)
		return;

	fuegoTiempoEnfriamiento = fuegoTiempoEnfriamientoTanque;

	float xBala = 0.0;
	float yBala = 0.0;
	float xVelocidadBala = 0.0;
	float yVelocidadBala = 0.0;

	calcularPosicionCeldaFrontal(&xBala, &yBala);

	switch (getDireccion())
	{
	case Direccion_Izquierda: xVelocidadBala = -velocidadBala; break;
	case Direccion_Derecha: xVelocidadBala = velocidadBala; break;
	case Direccion_Arriba: yVelocidadBala = -velocidadBala; break;
	case Direccion_Abajo: yVelocidadBala = velocidadBala; break;
	}

	Bala* bala = getGameManager()->crearActor<Bala>(xBala, yBala);

	if (bala)
	{
		bala->setTipoActorPropietario(getTipoActor());
		bala->setXVelocidad(xVelocidadBala);
		bala->setYVelocidad(yVelocidadBala);
	}
}

void Tanque::calcularPosicionCeldaFrontal(float* _x, float* _y)
{
	switch (getDireccion())
	{
	case Direccion_Izquierda:
		(*_x) = int(getX()) - 0.01;
		(*_y) = int(getY()) + (int(getAlto()) / 2.0);

		break;
	case Direccion_Derecha:
		(*_x) = int(getX()) + int(getAncho()) + 0.01;
		(*_y) = int(getY()) + (int(getAlto()) / 2.0);
		break;
	case Direccion_Arriba:
		(*_y) = int(getY()) - 0.01;
		(*_x) = int(getX()) + (int(getAncho()) / 2.0);
		break;
	case Direccion_Abajo:
		(*_y) = int(getY()) + int(getAlto()) + 0.01;
		(*_x) = int(getX()) + (int(getAncho()) / 2.0);
		break;
	}
}
