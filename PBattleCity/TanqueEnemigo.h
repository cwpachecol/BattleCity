#pragma once
#include "Tanque.h"
#include "GameManager.h"
#include "TanqueJugador.h"
#include "Actor.h"

class TanqueEnemigo :
    public Tanque
{
private:
    Actor* tanqueJugador;
protected:
    float analizarTemporizador;
    float analizarTiempo;

    float ultimoAnalisisX;
    float ultimoAnalisisY;

    void analizar();
    void moverDireccionRandom();
    void moverDireccionIA();

public:
    TanqueEnemigo(Actor* _tanqueJugador);
    ~TanqueEnemigo();
    void actualizar(float _dt);
};

