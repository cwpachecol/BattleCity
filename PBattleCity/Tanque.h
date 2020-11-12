#pragma once
#include <iostream>
#include <string>
using namespace std;


class Tanque
{
private:
	int x;
	int y;
	string avatar;
	int velocidad;
	int numeroVidas;
	int energia;
	int dx;
	int dy;
public:
	int getX() { return x; }
	int getY() { return y; }
	void setX(int _x) { x = _x; }
	void setY(int _y) { y = _y; }
	string getAvatar() { return avatar; }
	void setAvatar(string _avatar) { avatar = _avatar; }
	int getVelocidad() { return velocidad; }
	void setVelocidad(int _velocidad) { velocidad = _velocidad; }
	int getNumeroVidas() { return numeroVidas; }
	void setNumeroVidas(int _numeroVidas) { numeroVidas = _numeroVidas; }

	int getEnergia() { return energia; }
	void setEnergia(int _energia) { energia = _energia; }

	int getDx() { return dx; }
	void setDx(int _dx) { dx = _dx; }

	int getDy() { return dy; }
	void setDy(int _dy) { dy = _dy; }

	void Mover();
	void Mostrar();
};

