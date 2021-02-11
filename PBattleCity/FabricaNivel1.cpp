#include "FabricaNivel1.h"
#include "FabricaNiveles.h"
#include "TanqueEnemigo2.h"

FabricaNivel1::FabricaNivel1(GameManager* _gameManager):FabricaNiveles(_gameManager)
{
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
