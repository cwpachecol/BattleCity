#pragma once
#include "..\ColorConsola.h"


class ObjetoIC
{
private:
	float x;
	float y;
	int ancho;
	int alto;
	ColorConsola colorSimbolo;
	ColorConsola colorFondo;
	ColorConsola colorSimboloSeleccion;
	ColorConsola colorFondoSeleccion;
	char simboloBase;
	bool seleccionado;
	bool visible;
public:

	float getX() { return x; }
	float getY() { return y; }
	int getAncho() { return ancho; }
	int getAlto() { return alto; }
	ColorConsola getColorSimbolo() { return colorSimbolo; }
	ColorConsola getColorFondo() { return colorFondo; }
	ColorConsola getColorSimboloSeleccion() { return colorSimboloSeleccion; }
	ColorConsola getColorFondoSeleccion() { return colorFondoSeleccion; }
	char getSimboloBase() { return simboloBase; }
	bool getSeleccionado() { return seleccionado; }
	bool getVisible() { return visible; }


	void setX(float _x) { x = _x; }
	void setY(float _y) { y = _y; }
	void setAncho(int _ancho) { ancho = _ancho; }
	void setAlto(int _alto) { alto = _alto; }
	
	virtual void mostrar() = 0;

};


