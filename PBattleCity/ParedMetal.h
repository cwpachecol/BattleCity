#pragma once
#include "Obstaculo.h"
class ParedMetal :
    public Obstaculo
{
public:
    ParedMetal();
    void renderizar(SistemaRenderizacion* _sistemaRenderizacion);
};

