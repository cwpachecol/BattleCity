#pragma once
#include "Tanque.h"
class TanqueEnemigo :
    public Tanque
{
protected:
    float analizarTemporizador;
    float analizarTiempo;

    float ultimoAnalisisX;
    float ultimoAnalisisY;

    void analizar();
    void moverDireccionRandom();

public:
    TanqueEnemigo();
    ~TanqueEnemigo();
    void actualizar(float _dt);
};

