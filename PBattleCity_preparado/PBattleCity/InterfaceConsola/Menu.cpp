#include "Menu.h"
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include "..\Utilitarios.h"
#include <iostream>
#include <algorithm>

using namespace std;

Menu::Menu()
{
	numeroElementos = 0;
	indiceElementoActual = 0;
	indiceElementoAnterior = 0;
	siguienteXMenuItem = getX();
	siguienteYMenuItem = getY();
	setTexto("Menu");
}

void Menu::agregarMenuItem(Panel* _menuItem)
{
	_menuItem->setX(getX());
	_menuItem->setY(siguienteYMenuItem);
	menuItems.push_back(_menuItem);
	numeroElementos++;
	siguienteYMenuItem = siguienteYMenuItem + _menuItem->getAlto();
	setAlto(getAlto() + _menuItem->getAlto());
}

void Menu::eliminarMenuItem(Panel* _menuItem)
{
	vector<Panel*>::iterator itmi;
	itmi = find(menuItems.begin(), menuItems.end(), _menuItem);
	if (itmi != menuItems.end()) {
		menuItems.erase(itmi);
	}
}

void Menu::vaciarMenuItems()
{
	menuItems.clear();
}

void Menu::mostrar()
{
	Panel::mostrar();
	vector<Panel*>::iterator itMenuItems;
	
	for (itMenuItems = menuItems.begin(); itMenuItems != menuItems.end(); ++itMenuItems) {
		(*itMenuItems)->mostrar();
	}

	/*for (int i = 0; i < getAncho(); i++) {
		for (int j = 0; j < getAlto(); j++) {
			gotoxy(getX() + i, getY() + j);
			cout << getCaracterBase() << endl;
		}
	}

	for (unsigned int i = 0; i < hijos.size(); i++)
	{
		hijos[i]->Mostrar();
	}*/
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

	/*char key = ';';

	if (_kbhit()) {
		key = _getch();
	}

	if (key == 72) {
		teclaPresionada = true;
		
		if (indiceElementoActual > 0) 
			indiceElementoActual--;
	}

	if (key == 80) {
		teclaPresionada = true;

		if (indiceElementoActual < numeroElementos - 1)
			indiceElementoActual++;
	}

	if (key == 13) {
		teclaPresionada = true;
		hijos[indiceElementoActual]->OnPressEnter();
		opcionMenu = indiceElementoActual;
		opcionSalir = true;
	}*/

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

void Menu::Bucle() {
	/*while (!opcionSalir) {

		indiceElementoAnterior = indiceElementoActual;

		if (getTecla()) {
			if (indiceElementoActual != indiceElementoAnterior) {
				hijos[indiceElementoAnterior]->setSeleccionado(false);
				hijos[indiceElementoAnterior]->Mostrar();
				hijos[indiceElementoActual]->setSeleccionado(true);
				hijos[indiceElementoActual]->Mostrar();
			}
			
			gotoxy(27, 7);
			EstablecerColor(0, 15);

			switch (indiceElementoActual)
			{
			case 1:
				cout << "Presione este boton para iniciar el juego." << endl;
				break;
			case 2:
				cout << "Presione este boton para elegir el nivel de dificultada de juego." << endl;
				break;
			case 3:
				cout << "Presione este boton para salir del juego." << endl;
				break;
			}

			MostrarSelector();
		}
	}*/
}


void Menu::Iniciar() {
	/*numeroElementos = hijos.size();
	Bucle();*/
}
