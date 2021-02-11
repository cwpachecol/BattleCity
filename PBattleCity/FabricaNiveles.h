#pragma once
#include<vector>
#include<iostream>
#include<string>
using namespace std;

class Actor;
class GameManager;

class FabricaNiveles
{
private:
		GameManager* gameManager;
		vector<string> mapaNivel;
public:
	FabricaNiveles(GameManager* _gameManager);

	GameManager* getGameManager() { return gameManager; }
	vector<string> getMapaNivel() { return mapaNivel; }

	void setGameManager(GameManager* _gameManager) { gameManager = _gameManager; }
	void setMapaNivel(vector<string> _mapaNivel) { mapaNivel = _mapaNivel; }

	virtual void crearInstanciaMapaNivel() = 0;
	virtual Actor* crearInstanciaParedMetal(float _x, float _y) = 0;
	virtual Actor* crearInstanciaParedLadrillo(float _x, float _y) = 0;
	virtual Actor* crearInstanciaTanqueEnemigo(float _x, float _y) = 0;
	virtual Actor* crearInstanciaTanqueJugador(float _x, float _y) = 0;
	virtual Actor* crearInstanciaObstaculo(float _x, float _y) = 0;
	
};

