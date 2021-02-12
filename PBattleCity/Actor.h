#pragma once
#include <iostream>
#include <string>
#include "SistemaRenderizacion.h"
#include "GameManager.h"
#include "TipoActor.h"
#include "Direccion.h"
#include "Objeto.h"
#include <vector>
#include <map>

using namespace std;

class GameManager;

class Actor : public Objeto
{
private:
	static int numeroActores;
	
	GameManager* gameManager;
	int numeroActor;
	TipoActor tipoActor;
	float xVelocidad;
	float yVelocidad;
	
	map<Direccion, vector<DatosSimboloConsola>> avatar;
	map<Direccion, vector<DatosSimboloConsola>>::iterator itavatar;

	int energia;
	int limiteInferiorEnergia;
	int limiteSuperiorEnergia;
	
	bool destruirDespuesMuerte;
	bool invulnerable; //Indestructible_
	bool fisico;
	Direccion direccion;

public:
	Actor();
	Actor(float _x, float _y, float _xVelocidad, float _yVelocidad, int _ancho, int _alto, int _energia);
	Actor(GameManager* _gameManager, TipoActor _tipoActor, float _x, float _y, float _xVelocidad, float _yVelocidad, int _ancho, int _alto, int _energia, bool _destrirDespuesMuerte, bool _invulnerable, bool _fisico, Direccion _direccion);
	
	//static int getNumeroActores();

	int getNumeroActor() { return numeroActor; }
	TipoActor getTipoActor() { return tipoActor; }
	float getXVelocidad() { return xVelocidad; }
	float getYVelocidad() { return yVelocidad; }
	map<Direccion, vector<DatosSimboloConsola>> getAvatar() { return avatar; }
	int getEnergia() { return energia; }
	int getLimiteInferiorEnergia() { return limiteInferiorEnergia; }
	int getLimiteSuperiorEnergia() { return limiteSuperiorEnergia; }
	bool getDestruirDespuesMuerte() { return destruirDespuesMuerte; }
	bool getInvulnerable() { return invulnerable; }
	bool getFisico() { return fisico; }
	Direccion getDireccion() { return direccion; }
	GameManager* getGameManager(){ return gameManager; }

	void setTipoActor(TipoActor _tipoActor) { tipoActor = _tipoActor; }
	void setXVelocidad(float _xVelocidad) { xVelocidad = _xVelocidad; }
	void setYVelocidad(float _yVelocidad) { yVelocidad = _yVelocidad; }
	void setAvatar(map<Direccion, vector<DatosSimboloConsola>> _avatar) { avatar = _avatar; }
	void setEnergia(int _energia) { energia = _energia; }
	void setLimiteInferiorEnergia(int _limiteInferiorEnergia) { limiteInferiorEnergia = _limiteInferiorEnergia; }
	void setLimiteSuperiorEnergia(int _limiteSuperiorEnergia) { limiteSuperiorEnergia = _limiteSuperiorEnergia; }
	void setDestruirDespuesMuerte(bool _destruirDespuesMuerte) { destruirDespuesMuerte = _destruirDespuesMuerte; }
	void setInvulnerable(bool _invulnerable) { invulnerable = _invulnerable; }
	void setFisico(bool _fisico) { fisico = _fisico; }
	void setDireccion(Direccion _direccion) { direccion = _direccion; }
	void setGameManager(GameManager* _gameManager) { gameManager = _gameManager; }

	virtual void renderizar(SistemaRenderizacion* _sistemaRenderizacion);
	virtual void actualizar(float _dt);
	virtual void intersectar(Actor* _actor);
	void hacerDano(int _dano);
	void cargarEnergia(int _energia);
};

