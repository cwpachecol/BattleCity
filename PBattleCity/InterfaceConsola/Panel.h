#pragma once
#include "..\Objeto.h"
#include <iostream>
#include <string>

using namespace std;

class Panel :
    public Objeto
{
private:
    int anchoBorde;

    char simboloFondoPanel;
    ColorConsola colorSimboloFondoPanel;
    ColorConsola colorFondoPanel;
    char simboloBordePanel;
    ColorConsola colorSimboloBordePanel;
    ColorConsola colorFondoBordePanel;

    string texto;
    ColorConsola colorSimboloFuente;
    ColorConsola colorFondoFuente;
public:
    Panel();
    virtual void inicializar(int _x, int _y, int _ancho, int _alto, int _anchoBorde,
        char _simboloFondoPanel, ColorConsola _colorSimboloFondoPanel, ColorConsola _colorFondoPanel,
        char _simboloBordePanel, ColorConsola _colorSimboloBordePanel, ColorConsola _colorFondoBordePanel,
        ColorConsola _colorSimboloFuente, ColorConsola _colorFondoFuente);
    

    virtual void agregarItem(Panel* _item) {};
    virtual void eliminarItem(Panel* _item) {};
    virtual void vaciarItems() {};

    int getAnchoBorde() { return anchoBorde; }
    char getSimboloFondoPanel() { return simboloFondoPanel; }
    ColorConsola getColorSimboloFondoPanel() { return colorSimboloFondoPanel; }
    ColorConsola getColorFondoPanel() { return colorFondoPanel; }
    char getSimboloBordePanel() { return simboloBordePanel; }
    ColorConsola getColorSimboloBordePanel() { return colorSimboloBordePanel; }
    ColorConsola getColorFondoBordePanel() { return colorFondoBordePanel; }
    string getTexto() { return texto; }
    ColorConsola getColorSimboloFuente() { return colorSimboloFuente; }
    ColorConsola getColorFondoFuente() { return colorFondoFuente; }


    void setAnchoBorde(int _anchoBorde) { anchoBorde = _anchoBorde; }
    void setSimboloFondoPanel(char _simboloFondoPanel) { simboloFondoPanel = _simboloFondoPanel; }
    void setColorSimboloFondoPanel(ColorConsola _colorSimboloFondoPanel) { colorSimboloFondoPanel = _colorSimboloFondoPanel; }
    void setColorFondoPanel(ColorConsola _colorFondoPanel) { colorFondoPanel = _colorFondoPanel; }

    void setSimboloBordePanel(char _simboloBordePanel) { simboloBordePanel = _simboloBordePanel; }
    void setColorSimboloBordePanel(ColorConsola _colorSimboloBordePanel) { colorSimboloBordePanel = _colorSimboloBordePanel; }
    void setColorFondoBordePanel(ColorConsola _colorFondoBordePanel) { colorFondoBordePanel = _colorFondoBordePanel; }

    void setTexto(string _texto) { texto = _texto; }
    void setColorSimboloFuente(ColorConsola _colorSimboloFuente) { colorSimboloFuente = _colorSimboloFuente; }
    void setColorFondoFuente(ColorConsola _colorFondoFuente) { colorFondoFuente = _colorFondoFuente; }

    void generarBordes();
    void generarFondo();
    virtual void mostrar();


    void renderizarBordes(SistemaRenderizacion* _sistemaRenderizacion);
    void renderizarFondo(SistemaRenderizacion* _sistemaRenderizacion);
    virtual void renderizar(SistemaRenderizacion* _sistemaRenderizacion);
    virtual void actualizar(float _dt) {};
};

