#include "Tanque.h"
#include "Utilitarios.h"

void Tanque::Mover()
{
	OcultarCursor();
	gotoxy(getX(), getY());
	cout << "       " << endl;

	setX(getX() + getDx());
	setY(getY() + getDy());
	/*x = x + dx;
	y = y + dy;*/

	Mostrar();
}

void Tanque::Mostrar() {
	OcultarCursor();
	gotoxy(getX(), getY());
	cout << getAvatar() << endl;
}