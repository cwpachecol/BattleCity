#include "MenuItem.h"

MenuItem::MenuItem() {
	inicializarPanel(0, 0, 5, 3, 0, '+', ColorConsola_Blanco, ColorConsola_Cafe,
		'#', ColorConsola_Celeste, ColorConsola_Gris);

}

void MenuItem::mostrar()
{
	Panel::mostrar();
}
