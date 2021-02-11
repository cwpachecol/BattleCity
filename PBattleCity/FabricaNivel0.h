#pragma once
#include "FabricaNiveles.h"
#include "GameManager.h"


class FabricaNivel0 :
    public FabricaNiveles
{
public:
    FabricaNivel0(GameManager* _gameManager);
    Actor* crearInstanciaTanqueEnemigo(float _x, float _y);
    Actor* crearInstanciaObstaculo(float _x, float _y) {};
};

