#include <iostream>
#include "Tanque.h"
#include "./Escenario/MuroLadrillo.h"
#include "./Escenario/MuroMetal.h"
#include <conio.h>
#include <stdio.h>
#include <time.h>

using namespace std;

Tanque t01;
Tanque t02;
MuroLadrillo m01;
MuroLadrillo m02;
int dx = 0;
int dy = 0;

bool gameOver = false;

//metodo de control de teclas para hacer distintas operaciones en el juego
bool Tecla() {
	bool teclaPresionada = false;
	
	char key = ';';

	if (_kbhit()) {
		key = _getch();
	}

	if (key == 75) {
		teclaPresionada = true;
		dx = -1;
	}

	if (key == 72) {
		teclaPresionada = true;
		dy = -1;
	}

	if (key == 77) {
		teclaPresionada = true;
		dx = 1;
	}

	if (key == 80) {
		teclaPresionada = true;
		dy = 1;
	}

	if (key == 27) {
		gameOver = true;
	}

	if (key == 113) {

	}
	return teclaPresionada;
}



int main()
{
	t01.setAvatar("ITI");
	t01.setX(20);
	t01.setY(10);
	t01.setDx(0);
	t01.setDy(0);
	t01.Mostrar();

	t02.setAvatar("[-T-]");
	t02.setX(5);
	t02.setY(5);
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
		dx = 0;
		dy = 0;
	}


	cout << "---------------------" << endl;
	cout << "USFX Battle City 2020" << endl;
	cout << "---------------------" << endl;

	cin.get();
	return 0;
}