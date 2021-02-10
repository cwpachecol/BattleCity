#include "ParedMetal.h"

ParedMetal::ParedMetal()
{
	setTipoActor(TipoActor_Obstaculo);
	tipoObstaculo = TipoObstaculo_ParedMetal;
	setDireccion(Direccion_Ninguna);
	setAvatar(avatarParedMetal);
	setDestruirDespuesMuerte(false);
}


void ParedMetal::renderizar(SistemaRenderizacion* _sistemaRenderizacion) {
	Obstaculo::renderizar(_sistemaRenderizacion);
}

