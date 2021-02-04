#pragma once
#include "ObjetoIC.h"

class Panel :
    public ObjetoIC
{
private:
    int borde;
    char simboloBorde;
    ColorConsola colorSimboloBorde;
    ColorConsola colorFondoBorde;

public:
    Panel();
    void GenerarBordes();
    void GenerarFondo();
    void Mostrar();

    int getBorde() { return borde; }
    char getSimboloBorde() { return simboloBorde; }
    ColorConsola getColorSimboloBorde() { return colorSimboloBorde; }
    ColorConsola getColorFondoBorde() { return colorFondoBorde; }

    void setBorde(int _borde) { borde = _borde; }
    void setSimboloBorde(char _simboloBorde) { simboloBorde = _simboloBorde; }
    void setColorSimboloBorde(ColorConsola _colorSimboloBorde) { colorSimboloBorde = _colorSimboloBorde; }
    void setColorFondoBorde(ColorConsola _colorFondoBorde) { colorFondoBorde = _colorFondoBorde; }



};

