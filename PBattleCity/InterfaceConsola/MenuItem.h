#pragma once
#include "Panel.h"

class MenuItem :
    public Panel
{
public:
	MenuItem();
	ColorConsola colorSimboloPanel;
	ColorConsola colorFondoPanel;
	void agregarItem(Panel* _item) {};
	void eliminarItem(Panel* _item) {};
	void vaciarItems() {};
	void mostrar();
	void inicializar(int _x, int _y, int _ancho, int _alto, int _anchoBorde,
		char _simboloFondoPanel, ColorConsola _colorSimboloFondoPanel, ColorConsola _colorFondoPanel,
		char _simboloBordePanel, ColorConsola _colorSimboloBordePanel, ColorConsola _colorFondoBordePanel,
		ColorConsola _colorSimboloFuente, ColorConsola _colorFondoFuente);
	void seleccionarItem(bool _seleccionado);

	virtual void renderizar(SistemaRenderizacion* _sistemaRenderizacion);
	virtual void actualizar(float _dt) {};


};

