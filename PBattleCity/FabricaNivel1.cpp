#include "Nivel.h"
#include "FabricaNivel1.h"
#include "FabricaNiveles.h"
#include "ParedMetal.h"
#include "ParedLadrillo.h"
#include "TanqueEnemigo2.h"
#include "GameManager.h"


FabricaNivel1::FabricaNivel1(GameManager* _gameManager):FabricaNiveles(_gameManager)
{
	setMapaNivel(mapaNivel0);
}

Actor* FabricaNivel1::crearInstanciaTanqueEnemigo(float _x, float _y)
{
	// Encuentra puntero libre y crea objeto
	Actor* actor = new TanqueEnemigo2();
	actor->setX(_x);
	actor->setY(_y);

	if (getGameManager()->moverActorA(actor, _x, _y) == false)
	{
		delete actor;
		return NULL;
	}

	getGameManager()->lActores.push_back(actor);

	return actor;
}

Actor* FabricaNivel1::crearInstanciaObstaculo(float _x, float _y) {
	return nullptr;
}

void FabricaNivel1::crearInstanciaMapaNivel()
{

}


Actor* FabricaNivel1::crearInstanciaParedMetal(float _x, float _y) {
	Actor* actor = new ParedLadrillo();
	actor->setX(_x);
	actor->setY(_y);

	if (getGameManager()->moverActorA(actor, _x, _y) == false)
	{
		delete actor;
		return nullptr;
	}

	getGameManager()->lActores.push_back(actor);

	return actor;

}

Actor* FabricaNivel1::crearInstanciaParedLadrillo(float _x, float _y) {
	Actor* actor = new ParedLadrillo();
	actor->setX(_x);
	actor->setY(_y);

	if (getGameManager()->moverActorA(actor, _x, _y) == false)
	{
		delete actor;
		return nullptr;
	}

	getGameManager()->lActores.push_back(actor);

	return actor;

}