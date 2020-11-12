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
	int getNumeroVidas() { return numeroVidas; }
	void setNumeroVidas(int _numeroVidas) { numeroVidas = _numeroVidas; }

	int getEnergia() { return energia; }
	void setEnergia(int _energia) { energia = _energia; }
	
	void Mover();
	void Mostrar() override;
};

