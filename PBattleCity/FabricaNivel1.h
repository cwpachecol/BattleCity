#pragma once
#include "FabricaNiveles.h"

class GameManager;

class FabricaNivel1 :
	public FabricaNiveles
{
public:
	FabricaNivel1(GameManager* _gameManager);
	void crearInstanciasMapaNivel();
	Actor* crearInstanciaArbusto(float _x, float _y);
	Actor* crearInstanciaParedMetal(float _x, float _y);
	Actor* crearInstanciaParedLadrillo(float _x, float _y);
	Actor* CrearInstanciaPantano(float _x, float _y);
	Actor* crearInstanciaTanqueJugador(float _x, float _y);
	Actor* crearInstanciaTanqueEnemigo(float _x, float _y);
	Actor* crearInstanciaObstaculo(float _x, float _y);
};

