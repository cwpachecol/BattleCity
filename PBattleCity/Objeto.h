#pragma once
#include "SistemaRenderizacion.h"

class Objeto
{
private:
	float x;
	float y;
	float ancho;
	float alto;
	bool seleccionable;
	bool seleccionado;
	bool visible;
public:
	Objeto();
	Objeto(float _x, float _y);
	float getX() { return x; }
	float getY() { return y; }
	float getAncho() { return ancho; }
	float getAlto() { return alto; }
	bool getSeleccionable() { return seleccionable; }
	bool getSeleccionado() { return seleccionado; }
	bool getVisible() { return visible; }

	void setX(float _x) { x = _x; }
	void setY(float _y) { y = _y; }
	void setAncho(float _ancho) { ancho = _ancho; }
	void setAlto(float _alto) { alto = _alto; }
	void setSeleccionable(bool _seleccionable) { seleccionable = _seleccionable; }
	void setSeleccionado(bool _seleccionado) { seleccionado = _seleccionado; }
	void setVisible(bool _visible) { visible = _visible; }

	virtual void renderizar(SistemaRenderizacion* _sistemaRenderizacion) = 0;
	virtual void actualizar(float _dt) = 0;
};

