#include "Nivel.h"
#include "FabricaNivel1.h"
#include "FabricaNiveles.h"
#include "Arbusto.h"
#include "ParedMetal.h"
#include "ParedLadrillo.h"
#include "Pantano.h"
#include "TanqueEnemigo2.h"
#include "GameManager.h"


FabricaNivel1::FabricaNivel1(GameManager* _gameManager):FabricaNiveles(_gameManager)
{
	setMapaNivel(mapaNivel1);
}

Actor* FabricaNivel1::crearInstanciaTanqueEnemigo(float _x, float _y)
{
	// Encuentra puntero libre y crea objeto
	Actor* actor = new TanqueEnemigo2();
	actor->setX(_x);
	actor->setY(_y);
	actor->setGameManager(getGameManager());
	if (getGameManager()->moverActorA(actor, _x, _y) == false)
	{
		delete actor;
		return NULL;
	}

	getGameManager()->lActores.push_back(actor);

	return actor;
}

Actor* FabricaNivel1::crearInstanciaObstaculo(float _x, float _y) {
	Actor* actor = new Pantano();
	actor->setAvatar(avatarPantanoN2);
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

void FabricaNivel1::crearInstanciasMapaNivel()
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
			case celdaSimbolo_Pantano: {
				Pantano* pantano = (Pantano*)crearInstanciaPantano(c, f);
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



Actor* FabricaNivel1::crearInstanciaArbusto(float _x, float _y) {
	Actor* actor = new Arbusto();
	actor->setAvatar(avatarArbustoN2);
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


Actor* FabricaNivel1::crearInstanciaParedMetal(float _x, float _y) {
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

Actor* FabricaNivel1::crearInstanciaParedLadrillo(float _x, float _y) {
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

Actor* FabricaNivel1::CrearInstanciaPantano(float _x, float _y)
{
	return nullptr;
}

Actor* FabricaNivel1::crearInstanciaTanqueJugador(float _x, float _y)
{
	Actor* actor = new TanqueJugador();
	actor->setAvatar(avatarTanqueJugador1N2);
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
