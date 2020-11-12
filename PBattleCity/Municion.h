#pragma once
#include "Actor.h"
#include "Utilitarios.h"

enum EstadoMunicion{
    Inactivo,
    Activado,
    EnCurso,
    Impactado
};

class Municion :
    public Actor
{
private:
    Direccion direccionMunicion;
    EstadoMunicion estado;
public:
    virtual void Mostrar() = 0;
    virtual void Mover() = 0;
    virtual void Impactar() = 0;
    virtual void CambiarDireccion() = 0;
};

