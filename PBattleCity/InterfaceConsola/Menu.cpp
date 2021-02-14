#include "Menu.h"
#include "Menu.h"
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include "..\Utilitarios.h"
#include <iostream>
#include <algorithm>
#include "MenuItem.h"

using namespace std;

Menu::Menu()
{
	numeroItems = 0;
	indiceItemActual = 0;
	indiceItemAnterior = 0;
	setTexto("Menu item");
	setAlto(getAnchoBorde());
	setX(5);
	setY(1);
	setAncho(20);
	setAlto(10);
	setAnchoBorde(1);
	siguienteXItem = getX() + getAnchoBorde();
	siguienteYItem = getY() + getAnchoBorde();

}

void Menu::inicializar(int _x, int _y, int _ancho, int _alto, int _anchoBorde,
	char _simboloFondoPanel, ColorConsola _colorSimboloFondoPanel, ColorConsola _colorFondoPanel,
	char _simboloBordePanel, ColorConsola _colorSimboloBordePanel, ColorConsola _colorFondoBordePanel,
	ColorConsola _colorSimboloFuente, ColorConsola _colorFondoFuente) {
	Panel::inicializar(_x, _y, _ancho, _alto, _anchoBorde, _simboloFondoPanel, _colorSimboloFondoPanel, _colorFondoPanel,
		_simboloBordePanel, _colorSimboloBordePanel, _colorFondoBordePanel, _colorSimboloFuente, _colorFondoFuente);
}

void Menu::renderizar(SistemaRenderizacion* _sistemaRenderizacion)
{
	Panel::renderizar(_sistemaRenderizacion);
	vector<Panel*>::iterator itItems;

	for (itItems = items.begin(); itItems != items.end(); ++itItems) {
		(*itItems)->renderizar(_sistemaRenderizacion);
	}
}

void Menu::agregarItem(Panel* _item)
{
	_item->setX(getX() + getAnchoBorde());
	_item->setY(siguienteYItem);
	items.push_back(_item);
	numeroItems++;
	siguienteYItem = siguienteYItem + _item->getAlto();
	setAlto(getAlto() + _item->getAlto());
}

void Menu::eliminarItem(Panel* _item)
{
	vector<Panel*>::iterator itmi;
	itmi = find(items.begin(), items.end(), _item);
	if (itmi != items.end()) {
		items.erase(itmi);
	}
}

void Menu::vaciarItems()
{
	items.clear();
}

void Menu::mostrar()
{
	Panel::mostrar();
	vector<Panel*>::iterator itItems;

	for (itItems = items.begin(); itItems != items.end(); ++itItems) {
		(*itItems)->mostrar();
		//cout << (*itItems)->getTexto() << endl;
		//(*itItems)->mostrar();

	}
}

void Menu::MostrarSelector() {
	/*int posxSelector = 0;
	int posySelector = 0;

	EstablecerColor(ObjetoIT::getColorFondoBase(), ObjetoIT::getColorCaracterBase());

	posxSelector = hijos[indiceElementoAnterior]->getX() - 4;
	posySelector = hijos[indiceElementoAnterior]->getY();
	gotoxy(posxSelector, posySelector);
	cout << "   " << endl;

	posxSelector = hijos[indiceElementoActual]->getX() - 4;
	posySelector = hijos[indiceElementoActual]->getY();
	gotoxy(posxSelector, posySelector);
	cout << "-->" << endl;*/
}

bool Menu::getTecla() {
	bool teclaPresionada = false;

	char key = ';';

	if (_kbhit()) {
		key = _getch();
	}

	if (key == 72) {
		teclaPresionada = true;

		if (indiceItemActual > 0)
			indiceItemActual--;
	}

	if (key == 80) {
		teclaPresionada = true;

		if (indiceItemActual < items.size())
			indiceItemActual++;
	}

	if (key == 13) {
		teclaPresionada = true;
		//items[indiceItemActual]->OnPressEnter();
		opcionMenu = indiceItemActual;

		opcionSalir = true;
	}

	/*
	if (key == 75) {
		teclaPresionada = true;
	}

	if (key == 77) {
		teclaPresionada = true;
	}
	*/
	//if (key == 27) {
	//	opcionSalir = true;
	//}

	//if (key == 13) {
	//	//Llamar al metodo respectivo
	//}



	return teclaPresionada;
}

int Menu::Bucle(SistemaRenderizacion* _sistemaRenderizacion) {
	while (!opcionSalir) {

		indiceItemAnterior = indiceItemActual;

		if (getTecla()) {
			if (indiceItemActual != indiceItemAnterior) {
				((MenuItem*)items[indiceItemAnterior])->seleccionarItem(false);

				items[indiceItemAnterior]->renderizar(_sistemaRenderizacion);
				((MenuItem*)items[indiceItemActual])->seleccionarItem(true);
				items[indiceItemActual]->renderizar(_sistemaRenderizacion);
				_sistemaRenderizacion->ejecutar();
			}

			gotoxy(27, 7);
			EstablecerColor(0, 15);

			switch (indiceItemActual)
			{
			case 1:
				cout << "Presione este boton para iniciar el juego." << endl;
				break;
			case 2:
				cout << "Presione este boton para elegir el nivel de dificultada de juego." << endl;
				break;
			case 3:
				cout << "Presione este boton para ver creditos." << endl;
				break;
			case 4:
				cout << "Presione este boton para salir del juego." << endl;
				break;
			}

			//MostrarSelector();
		}
	}

	/*switch (indiceItemActual) {
	case 0:
		/// <summary>
		/// Ejecuta la funcion que eligio
		/// </summary>
		/// <param name="_sistemaRenderizacion"></param>
		break;
	case 1:
		/// <summary>
		/// Ejecuta la funcion que eligio
		/// </summary>
		/// <param name="_sistemaRenderizacion"></param>
		break;
	case 2:
		/// <summary>
		/// Ejecuta la funcion que eligio
		/// </summary>
		/// <param name="_sistemaRenderizacion"></param>
		break;

	}*/
	return opcionMenu;
}


void Menu::Iniciar() {
	/*numeroElementos = hijos.size();
	Bucle();*/
}


