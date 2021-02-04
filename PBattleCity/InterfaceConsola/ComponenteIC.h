#pragma once
#include "ObjetoIC.h"

class ComponenteIC : public ObjetoIC
{
public:
	| ComponenteIC();
		virtual void Mostrar() = 0;
};

