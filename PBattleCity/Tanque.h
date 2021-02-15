#pragma once
#include <iostream>
#include <string>
#include "Actor.h"
#include "Nivel.h"

using namespace std;


class Tanque : public Actor
{
public:
	Tanque();
	virtual void actualizar(float _dt);
	virtual void renderizar(SistemaRenderizacion* _sistemaRenderizacion);

	void mover(Direccion _direccion);
	void disparar();

	virtual Tanque* clone(){ return NULL; };

	void setVelocidad(float _velocidad) { velocidad = _velocidad; }
	float getVelocidad() { return velocidad; }
protected:
	void calcularPosicionCeldaFrontal(float* _x, float* _y);

protected:
	DatosSimboloConsola imagenTanque[Direccion_MAX][tamanoTanque][tamanoTanque];
	
	float fuegoTiempoEnfriamiento;
	float velocidad;
};

