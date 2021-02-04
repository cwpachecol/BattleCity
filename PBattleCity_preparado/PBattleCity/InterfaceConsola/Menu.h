#pragma once
#include "Panel.h"
#include "ComponenteIC.h"
#include <vector>
#include <iostream>
using namespace std;

class Menu: public Panel{
private:
	vector<Panel*> menuItems;
	int numeroElementos;
	int indiceElementoActual;
	int indiceElementoAnterior;
	bool opcionSalir;
	int opcionMenu;
	int siguienteXMenuItem;
	int siguienteYMenuItem;

	//opcionMenu = 1 -> llamar a GameManager
	//opcionMenu = 2 -> llamar a menu dificultad
	//opcionMenu = 3 -> salir
	
public:
	Menu();
	void agregarMenuItem(Panel* _menuItem);
	void eliminarMenuItem(Panel* _menuItem);
	void vaciarMenuItems();

	void mostrar();
	bool getTecla();
	void Bucle();
	void Iniciar();
	void MostrarSelector();

	void setNumeroElementos(int _numeroElementos) { numeroElementos = _numeroElementos; }
	int getNumeroElementos() { return numeroElementos; }

	void setIndiceElementoActual(int _indiceElementoActual) { indiceElementoActual = _indiceElementoActual; }
	int getIndiceElementoActual() { return indiceElementoActual; }

	void setIndiceElementoAnterior(int _indiceElementoAnterior) { indiceElementoAnterior = _indiceElementoAnterior; }
	int getIndiceElementoAnterior() { return indiceElementoAnterior; }

	void setOpcionSalir(bool _opcionSalir) { opcionSalir = _opcionSalir; }
	bool getOpcionSalir() { return opcionSalir; }
	
	void setOpcionMenu(int _opcionMenu) { opcionMenu = _opcionMenu; }
	int getOpcionMenu() { return opcionMenu; }

};
