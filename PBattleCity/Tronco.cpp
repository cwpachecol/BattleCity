#include "Tronco.h"

//void Tronco::cargarDatosNivel()
//{
//	DatosSimboloConsola imagen;
//	imagen.simbolo = troncoImagen;
//	imagen.colorSimbolo = troncoColorSimbolo;
//	imagen.colorFondo = troncoColorFondo;
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

Tronco::Tronco()
{
	setTipoActor(TipoActor_Obstaculo);
	tipoObstaculo = TipoObstaculo_Tronco;
	setDireccion(Direccion_MAX);
}


void Tronco::renderizar(SistemaRenderizacion* _sistemaRenderizacion) {
	Obstaculo::renderizar(_sistemaRenderizacion);
}

