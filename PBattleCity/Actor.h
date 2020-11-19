#pragma once
#include <iostream>
#include <string>
#include "SistemaRenderizacion.h"
#include "GameManager.h"
#include "TipoActor.h"
#include "Direccion.h"
using namespace std;

class GameManager;

class Actor
{
protected:
	GameManager* gameManager;
	TipoActor tipoActor;
	float x;
	float y;
	float xVelocidad;
	float yVelocidad;
	string avatar;
	int ancho;
	int alto;
	int dx;
	int dy;
	int energia;

	bool destruirDespuesMuerte;
	bool invulnerable;
	bool fisico;
	Direccion direccion;

public:
	Actor();
	Actor(float _x, float _y, float _xVelocidad, float _yVelocidad, string _avatar, int _ancho, int _alto, int _dx, int _dy, int _energia);
	float getX() { return x; }
	float getY() { return y; }
	float getXVelocidad() { return xVelocidad; }
	float getYVelocidad() { return yVelocidad; }
	string getAvatar() { return avatar; }
	int getAncho() { return ancho; }
	int getAlto() { return alto; }
	int getDx() { return dx; }
	int getDy() { return dy; }
	bool getDestruirDespuesMuerte() { return destruirDespuesMuerte; }
	bool getInvulnerable() { return invulnerable; }
	bool getFisico() { return fisico; }
		
	void setX(float _x) { x = _x; }
	void setY(float _y) { y = _y; }
	void setXVelocidad(float _xVelocidad) { xVelocidad = _xVelocidad; }
	void setYVelocidad(float _yVelocidad) { yVelocidad = _yVelocidad; }
	
	void setAvatar(string _avatar) { avatar = _avatar; }
	void setAncho(int _ancho) { ancho = _ancho; }
	void setAlto(int _alto) { alto = _alto; }
	void setDx(int _dx) { dx = _dx; }
	void setDy(int _dy) { dy = _dy; }

	//virtual void Mostrar() = 0;
	virtual void renderizar(SistemaRenderizacion* _sistemaRenderizacion);
	virtual void actualizar(float _dt);
	virtual void intersectar(Actor* actor);
	void setGameManager(GameManager* _gameManager){ gameManager = _gameManager; }
	void hacerDano(int _dano);
};

