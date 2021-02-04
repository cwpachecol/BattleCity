#pragma once
#include "Panel.h"
#include "ComponenteIC.h"

class MenuItem :
    public Panel
{
private:
	char simbolo;
	ColorConsola colorSimbolo;
	ColorConsola colorFondo;
	char simboloSeleccion;
	ColorConsola colorSimboloSeleccion;
	ColorConsola colorFondoSeleccion;
	
//char simboloBase;
public:
	MenuItem();
	void agregarMenuItem(ComponenteIC* _menuItem) {};
	void eliminarMenuItem(ComponenteIC* _menuItem) {};
	void vaciarMenuItems() {};
	virtual void mostrar();
};

