#pragma once
#include "Obstaculo.h"
class ParedLadrillo :
    public Obstaculo
{
public:
    ParedLadrillo();
    void renderizar(SistemaRenderizacion* _sistemaRenderizacion);
    
};

