#pragma once
#include "Municion.h"

class Bala :
    public Municion
{
public:
    void Mostrar();
    void Mover();
    void Impactar();
    void CambiarDireccion() {};
};

