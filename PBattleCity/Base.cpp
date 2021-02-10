#include "Base.h"

//Base* Base::instancia = 0;
//
//Base* Base::getInstancia()
//{
//	if (instancia == 0)
//	{
//		instancia = new Base();
//	}
//
//	return instancia;
//}


Base::Base() {
	setTipoActor(TipoActor_Base);

	setAncho(columnasBase);
	setAlto(filasBase);

	setEnergia(energiaBase);
	setDestruirDespuesMuerte(false);
}

void Base::renderizar(SistemaRenderizacion* _sistemaRenderizacion) {
	int fila = int(getY());
	int columna = int(getX());

	for(int f = 0; f < filasBase; f++) {
		for (int c = 0; c < columnasBase; c++) {
			DatosSimboloConsola dsc;
			switch (getEnergia()) {
				case 3: dsc = imagenBaseNormal[f][c]; break;
				case 2: dsc = imagenBaseDanada[f][c]; break;
				default: dsc = imagenBaseDestruida[f][c]; break;
			}
			_sistemaRenderizacion->dibujarCaracter(fila + f, columna + c, dsc.simbolo, dsc.colorSimbolo, dsc.colorFondo);
		}
	}
}