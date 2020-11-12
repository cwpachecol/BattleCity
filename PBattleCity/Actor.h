#pragma once
#include <iostream>
#include <string>
using namespace std;


class Actor
{
//protected:
//	int x;
//	int y;
//	string avatar;
//	int ancho;
//	int alto;
//	int dx;
//	int dy;
//	int velocidad;

private:
	int x;
	int y;
	string avatar;
	int ancho;
	int alto;
	int dx;
	int dy;
	int velocidad;

public:
	int getX() { return x; }
	int getY() { return y; }
	string getAvatar() { return avatar; }
	int getVelocidad() { return velocidad; }
	int getDx() { return dx; }
	int getDy() { return dy; }

	void setX(int _x) { x = _x; }
	void setY(int _y) { y = _y; }
	void setAvatar(string _avatar) { avatar = _avatar; }
	void setVelocidad(int _velocidad) { velocidad = _velocidad; }
	void setDx(int _dx) { dx = _dx; }
	void setDy(int _dy) { dy = _dy; }

	virtual void Mostrar() = 0;

};

