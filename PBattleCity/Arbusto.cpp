#include "Arbusto.h"
#include "Nivel01.h"

//void Arbusto::cargarDatosNivel()
//{
//	DatosSimboloConsola imagen;
//	imagen.simbolo = arbustoImagen;
//	imagen.colorSimbolo = arbustoColorSimbolo;
//	imagen.colorFondo = arbustoColorFondo;
//
//	map<int, DatosSimboloConsola> mid;
//	pair<int, DatosSimboloConsola> pid;
//
//	pid.first = 1;
//	pid.second = imagen;
//
//	mid.insert(pid);
//
//	pair<Direccion, map<int, DatosSimboloConsola>> pAvatar;
//	pAvatar.first = Direccion_MAX;
//	pAvatar.second = mid;
//
//	avatar.insert(pAvatar);
//}

Arbusto::Arbusto()
{
	setTipoActor(TipoActor_Obstaculo);
	tipoObstaculo = TipoObstaculo_Arbusto;
	setDireccion(Direccion_MAX);
}


void Arbusto::renderizar(SistemaRenderizacion* _sistemaRenderizacion) {
	Obstaculo::renderizar(_sistemaRenderizacion);
}
