#pragma once
#include "Actor.h"
#include "GameManager.h"

class FabricaNiveles
{
private:
		GameManager* gameManager;
public:
	FabricaNiveles(GameManager* _gameManager);

	GameManager* getGameManager() { return gameManager; }
	void setGameManager(GameManager* _gameManager) { gameManager = _gameManager; }

	virtual Actor* crearInstanciaTanqueEnemigo(float, float) = 0;
	virtual Actor* crearInstanciaObstaculo(float, float) = 0;
};

