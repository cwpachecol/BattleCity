#pragma once
#include <iostream>
#include <string>
#include "Actor.h"

using namespace std;


class Tanque : public Actor
{
private:
	int numeroVidas;
	int energia;
public:
	//Tanque();
	//Tanque(float _x, float _y, float _xVelocidad, float _yVelocidad, string _avatar, int _ancho, int _alto, int _dx, int _dy, int _energia):Actor(float _x, float _y, float _xVelocidad, float _yVelocidad, string _avatar, int _ancho, int _alto, int _dx, int _dy, int _energia){};
	int getNumeroVidas() { return numeroVidas; }
	void setNumeroVidas(int _numeroVidas) { numeroVidas = _numeroVidas; }

	int getEnergia() { return energia; }
	void setEnergia(int _energia) { energia = _energia; }
	
	//void Mover();
	//void Mostrar() override;
};

