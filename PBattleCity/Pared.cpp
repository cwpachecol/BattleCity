#include "Pared.h"
#include <map>
#include "SistemaRenderizacion.h"
#include "Direccion.h"


Pared::Pared()
{
	tipoActor = TipoActor_Pared;
	direccion = Direccion_MAX;
}

void Pared::setImagenPared(unsigned char _simbolo, ColorConsola _colorImagen, ColorConsola _colorFondo) {
	DatosSimboloConsola imagenPared;
	imagenPared.simbolo = _simbolo;
	imagenPared.colorSimbolo = _colorImagen;
	imagenPared.colorFondo = _colorFondo;

	map<int, DatosSimboloConsola> mid;
	pair<int, DatosSimboloConsola> pid;

	pid.first = 1;
	pid.second = imagenPared;

	mid.insert(pid);

	pair<Direccion, map<int, DatosSimboloConsola>> pAvatar;
	pAvatar.first = Direccion_MAX;
	pAvatar.second = mid;

	avatar.insert(pAvatar);
}

void Pared::renderizar(SistemaRenderizacion* _sistemaRenderizacion) {
	Actor::renderizar(_sistemaRenderizacion);
}
