#pragma once
#include <ctime>
#include <vector>

#include "Actor.h"
#include "TipoActor.h"
#include "SistemaRenderizacion.h"
#include "Nivel.h"

const int numeroMaximoActores = 1024;

class Actor;

struct DatosEnemigosMuertos {
	int numeroEnemigo;
	TipoActor tipoEnemigo;
	float x;
	float y;
};


class GameManager
{
private:
	bool juegoActivo;
	clock_t relojUltimoFrame;
	SistemaRenderizacion sistemaRenderizacion;

	Actor* actores[numeroMaximoActores];
	//vector<Actor*> actores;

	Actor* base;
	Actor* jugador1;
	Actor* jugador2;

	int contadorEnemigosMuertos;
	
	//Vector que almacena los enemigos destruidos, almacenando su numeroActor, TipoActor, x e y
	vector<DatosEnemigosMuertos> datosEnemigosMuertos;

	void renderizar();
	void actualizar(float _dt);

public:
	GameManager();

	void configurarSistema();
	void inicializar();
	bool bucle();
	void abandonarJuego();

	template<class T>
	T* crearActor(float _x, float _y);

	Actor* crearActor(TipoActor _tipoActor, float _x, float _y);


	void destruirActor(Actor* _actor);
	Actor* detectarColisiones(float _x, float _y, float _ancho, float _alto, Actor* _actorExcluido);
	bool moverActorA(Actor* _actor, float _x, float _y);
	int getConteoActores(TipoActor _tipoActor);
	int getConteoEnemigosMuertos() { return contadorEnemigosMuertos; }
	int incrementarContadorEnemigosMuertos();
	//int agregarEnemigoMuerto(DatosEnemigosMuertos _datosEnemigoMuerto);
};

template<class T>
inline T* GameManager::crearActor(float _x, float _y)
{
	// Encuentra puntero libre y crea objeto
	for (int i = 0; i < numeroMaximoActores; i++)
	{
		if (actores[i] == 0)
		{
			T* actor = new T();
			
			if (actor == NULL)
				return NULL;

			actor->setGameManager(this);

			if (moverActorA(actor, _x, _y) == false)
			{
				delete actor;
				return NULL;
			}

			actores[i] = actor;

			return actor;
		}
	}

	return NULL;
}
