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
	Tanque(int _x, int _y, string _avatar, int _ancho, int _alto, int _dx, int _dy, int _velocidad, int _numeroVidas, int _energia) :Actor(_x, _y, _avatar, _ancho, _alto, _dx, _dy, _velocidad), numeroVidas(_numeroVidas), energia(_energia) {};
	int getNumeroVidas() { return numeroVidas; }
	void setNumeroVidas(int _numeroVidas) { numeroVidas = _numeroVidas; }

	int getEnergia() { return energia; }
	void setEnergia(int _energia) { energia = _energia; }
	
	void Mover();
	void Mostrar() override;
};

