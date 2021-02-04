#include "CompositeIC.h"

void CompositeIC::agregarHijo(ComponenteIC* _hijo)
{
	hijos.push_back(_hijo);
}

void CompositeIC::eliminarHijo(ComponenteIC* _hijo)
{
	vector<ComponenteIC*>::iterator ith;
	ith = find(hijos.begin(), hijos.end(), _hijo);
	if (ith != hijos.end()) {
		hijos.erase(ith);
	}
}

void CompositeIC::vaciarHijos()
{
	hijos.clear();
}


