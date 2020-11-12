#pragma once
#include "Actor.h"
#include "Utilitarios.h"

enum Direccion;

enum EstadoMunicion{
    Inactivo,
    Activado,
    EnCurso,
    Impactado
};

class Municion :
    public Actor
{
protected:
    Direccion direccion;
    EstadoMunicion estado;
    string avatarExplosion;
public:
    Direccion getDireccion() { return direccion; }
    EstadoMunicion getEstado() { return estado; }
    string getAvatarExplosion() { return avatarExplosion; }

    void setDireccion(Direccion _direccion) { direccion = _direccion; }
    void setEstado(EstadoMunicion _estado) { estado = _estado; }
    void setAvatarExplosion(string _avatarExplosion) { avatarExplosion = _avatarExplosion; }

    virtual void Mostrar() = 0;
    virtual void Mover() = 0;
    virtual void Impactar() = 0;
    virtual void CambiarDireccion() = 0;
};

