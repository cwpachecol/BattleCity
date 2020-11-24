#pragma once
#include "Actor.h"
class Base :
    public Actor
{
public:
    Base();

    virtual void renderizar(SistemaRenderizacion* _sistemaRenderizacion);
};

