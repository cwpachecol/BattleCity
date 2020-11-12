#include "Tanque.h"
#include "Utilitarios.h"

void Tanque::Mover()
{
	OcultarCursor();
	gotoxy(x, y);
	cout << "   " << endl;

	x = x + dx;
	y = y + dy;

	Mostrar();
}

void Tanque::Mostrar() {
	OcultarCursor();
	gotoxy(x, y);
	cout << avatar << endl;
}