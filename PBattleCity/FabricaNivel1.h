#pragma once
#include "FabricaNiveles.h"
#include "GameManager.h"


class FabricaNivel1 :
	public FabricaNiveles
{
public:
	FabricaNivel1(GameManager* _gameManager);
	Actor* crearInstanciaTanqueEnemigo(float _x, float _y);
	Actor* crearInstanciaObstaculo(float _x, float _y) {};
};

