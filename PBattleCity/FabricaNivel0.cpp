#include "FabricaNivel0.h"
#include "TanqueEnemigo1.h"
#include "ParedMetal.h"
#include "ParedLadrillo.h"
#include "Arbusto.h"
#include "GameManager.h"
#include "Nivel.h"

FabricaNivel0::FabricaNivel0(GameManager* _gameManager):FabricaNiveles(_gameManager)
{
	setMapaNivel(mapaNivel0);
}

Actor* FabricaNivel0::crearInstanciaObstaculo(float _x, float _y)
{
	return nullptr;
}

void FabricaNivel0::crearInstanciasMapaNivel()
{

	for (int f = 0; f < getMapaNivel().size(); f++) {
		for (int c = 0; c < getMapaNivel()[f].size(); c++) {
			//cout << f << "--" << c << " + " << fabricaNiveles->getMapaNivel()[f][c] << endl;
			unsigned char celdaSimbolo = getMapaNivel()[f][c];
			switch (celdaSimbolo) {
			case celdaSimbolo_Arbusto: {
				Arbusto* arbusto = (Arbusto*)crearInstanciaArbusto(c, f);
				break;
			}
			case celdaSimbolo_ParedMetal: {
				ParedMetal* paredMetal = (ParedMetal*)crearInstanciaParedMetal(c, f);
				break;
			}
			case celdaSimbolo_ParedLadrillo: {
				ParedLadrillo* paredLadrillo = (ParedLadrillo*)crearInstanciaParedLadrillo(c, f);
				break;
			}
			case celdaSimbolo_Jugador1: {
				TanqueJugador* jugador1 = (TanqueJugador*)crearInstanciaTanqueJugador(c + 0.5, f + 0.5);
				jugador1->setTeclas(VK_LEFT, VK_RIGHT, VK_UP, VK_DOWN, VK_SPACE, VK_TAB);
				getGameManager()->setJugador1(jugador1);
				break;
			}
			}
		}
	}

}

Actor* FabricaNivel0::crearInstanciaArbusto(float _x, float _y) {
	Actor* actor = new Arbusto();
	actor->setAvatar(avatarArbustoN1);
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
