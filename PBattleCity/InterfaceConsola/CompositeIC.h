#pragma once
#include "ComponenteIC.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class CompositeIC :
    public ComponenteIC
{
private:
    vector<ComponenteIC*> hijos;
public:
    void agregarHijo(ComponenteIC* _hijo);
    void eliminarHijo(ComponenteIC* _hijo);
    void vaciarHijos();

};

