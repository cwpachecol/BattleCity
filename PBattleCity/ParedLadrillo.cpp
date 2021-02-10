#include "ParedLadrillo.h"


ParedLadrillo::ParedLadrillo()
{
	setTipoActor(TipoActor_Obstaculo);
	tipoObstaculo = TipoObstaculo_ParedLadrillo;
	setDireccion(Direccion_Ninguna);
	setAvatar(avatarParedLadrillo);

}

void ParedLadrillo::renderizar(SistemaRenderizacion* _sistemaRenderizacion) {
	Obstaculo::renderizar(_sistemaRenderizacion);
}

