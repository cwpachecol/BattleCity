#include "FabricaNivel0.h"
#include "TanqueEnemigo1.h"
#include "ParedMetal.h"
#include "ParedLadrillo.h"
#include "GameManager.h"

FabricaNivel0::FabricaNivel0(GameManager* _gameManager):FabricaNiveles(_gameManager)
{
	setMapaNivel(mapaNivel0);
}

Actor* FabricaNivel0::crearInstanciaObstaculo(float _x, float _y)
{
	return nullptr;
}

void FabricaNivel0::crearInstanciaMapaNivel()
{

}

Actor* FabricaNivel0::crearInstanciaParedMetal(float _x, float _y) {
	Actor* actor = new ParedMetal();
	actor->setX(_x);
	actor->setY(_y);
	actor->setGameManager(getGameManager());
	if (getGameManager()->moverActorA(actor, _x, _y) == false)
	{
		delete actor;
		return nullptr;
	}

	getGameManager()->lActores.push_back(actor);

	return actor;

}

Actor* FabricaNivel0::crearInstanciaParedLadrillo(float _x, float _y) {
	Actor* actor = new ParedLadrillo();
	actor->setX(_x);
	actor->setY(_y);
	actor->setGameManager(getGameManager());
	if (getGameManager()->moverActorA(actor, _x, _y) == false)
	{
		delete actor;
		return nullptr;
	}

	getGameManager()->lActores.push_back(actor);

	return actor;

}

Actor* FabricaNivel0::crearInstanciaTanqueEnemigo(float _x, float _y)
{
	Actor* actor = new TanqueEnemigo1();
	actor->setX(_x);
	actor->setY(_y);

	actor->setGameManager(getGameManager());

	if (getGameManager()->moverActorA(actor, _x, _y) == false)
	{
		delete actor;
		return nullptr;
	}

	getGameManager()->lActores.push_back(actor);

	return actor;
}

Actor* FabricaNivel0::crearInstanciaTanqueJugador(float _x, float _y)
{
	Actor* actor = new TanqueJugador();
	actor->setX(_x);
	actor->setY(_y);
	actor->setGameManager(getGameManager());
	if (getGameManager()->moverActorA(actor, _x, _y) == false)
	{
		delete actor;
		return nullptr;
	}

	getGameManager()->lActores.push_back(actor);

	return actor;
}
