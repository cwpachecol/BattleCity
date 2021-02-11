#include "FabricaNivel0.h"
#include "TanqueEnemigo1.h"

FabricaNivel0::FabricaNivel0(GameManager* _gameManager):FabricaNiveles(_gameManager)
{
}

Actor* FabricaNivel0::crearInstanciaTanqueEnemigo(float _x, float _y)
{
	// Encuentra puntero libre y crea objeto
	Actor* actor = new TanqueEnemigo1();
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
