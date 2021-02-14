#include "MenuItem.h"

MenuItem::MenuItem()
{
	setTexto("Menu item");
	setAlto(getAnchoBorde());
	setX(5);
	setY(1);
	setAncho(20);
	setAlto(10);
	setAnchoBorde(1);

}

void MenuItem::mostrar()
{
	Panel::mostrar();
}

void MenuItem::inicializar(int _x, int _y, int _ancho, int _alto, int _anchoBorde,
	char _simboloFondoPanel, ColorConsola _colorSimboloFondoPanel, ColorConsola _colorFondoPanel,
	char _simboloBordePanel, ColorConsola _colorSimboloBordePanel, ColorConsola _colorFondoBordePanel,
	ColorConsola _colorSimboloFuente, ColorConsola _colorFondoFuente) {
	Panel::inicializar(_x, _y, _ancho, _alto, _anchoBorde, _simboloFondoPanel, _colorSimboloFondoPanel, _colorFondoPanel,
		_simboloBordePanel, _colorSimboloBordePanel, _colorFondoBordePanel, _colorSimboloFuente, _colorFondoFuente);
}

void MenuItem::seleccionarItem(bool _seleccionado)
{
	if (_seleccionado) {
		
		colorSimboloPanel = getColorSimboloFondoPanel();
		colorFondoPanel = getColorFondoPanel();
		setColorSimboloFondoPanel(ColorConsola_Negro);
		setColorFondoPanel(ColorConsola_Blanco);
	}
	else {
		setColorSimboloFondoPanel(colorSimboloPanel);
		setColorFondoPanel(colorFondoPanel);
	}
}

void MenuItem::renderizar(SistemaRenderizacion* _sistemaRenderizacion)
{
	Panel::renderizar(_sistemaRenderizacion);

}
