#pragma once
#include "Actor.h"
class Base :
    public Actor
{
private:
    Base();
    static Base* instancia;

public:
    static Base* getInstancia();

    virtual void renderizar(SistemaRenderizacion* _sistemaRenderizacion);
};

