#include "Objeto.h"

Objeto::Objeto()
{
	x = 0.0f;
	y = 0.0f;
	ancho = 1.0f;
	alto = 1.0;
	seleccionable = false;
	seleccionado = false;
	visible = false;
}

Objeto::Objeto(float _x, float _y)
{
	x = _x;
	y = _y;
}
