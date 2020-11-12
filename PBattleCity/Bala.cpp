#include "Bala.h"

void Bala::Mostrar()
{
	gotoxy(getX(), getY());
	cout << getAvatar() << endl;
}

void Bala::Mover()
{
	gotoxy(getX(), getY());
	cout << " " << endl;
	setX(getX() + getDx());
	setY(getY() + getDy());
	Mostrar();
}

void Bala::Impactar()
{
	gotoxy(getX(), getY());
	cout << getAvatarExplosion() << endl;
}
