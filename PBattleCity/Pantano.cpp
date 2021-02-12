#include "Pantano.h"

//void Pantano::cargarDatosNivel() {
//	DatosSimboloConsola imagen;
//	imagen.simbolo = pantanoImagen;
//	imagen.colorSimbolo = pantanoColorSimbolo;
//	imagen.colorFondo = pantanoColorFondo;
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

Pantano::Pantano()
{
	setTipoActor(TipoActor_Obstaculo);
	tipoObstaculo = TipoObstaculo_Pantano;
	setDireccion(Direccion_MAX);
}


void Pantano::renderizar(SistemaRenderizacion* _sistemaRenderizacion) {
	Obstaculo::renderizar(_sistemaRenderizacion);
}
