#include <iostream>
#include "GameManager.h"
#include "SistemaRenderizacion.h"
#include <vector>

//#include "Tanque.h"
//#include "Bala.h"
//#include "./Escenario/MuroLadrillo.h"
//#include "./Escenario/MuroMetal.h"
//#include <conio.h>
//#include <stdio.h>
//#include <time.h>
//#include "Municion.h"

using namespace std;



int main()
{
	/*
	vector<int> vi;
	vi.push_back(5);
	vi.push_back(10);
	vi.push_back(15);


	for (int i = 0; i < vi.size(); i++) {
		//cout << vi[i] << ", ";
		cout << vi.at(i) << ", ";
	}

	cout << endl;

	vector<DatosSimboloConsola> vdsc;
	DatosSimboloConsola dsc;
	
	dsc.simbolo = 274;
	dsc.colorSimbolo = ColorConsola_Azul;
	dsc.colorFondo = ColorConsola_CelesteOscuro;
	vdsc.push_back(dsc);
	
	vdsc.push_back(DatosSimboloConsola{ 120, ColorConsola_Amarillo, ColorConsola_AzulOscuro});

	for (int i = 0; i < vdsc.size(); i++) {
		cout << vdsc[i].simbolo << " - " << vdsc[i].colorSimbolo << "- " << vdsc[i].colorFondo << endl;
	}

	cout << endl;
	*/
	
	GameManager gameManager;

	gameManager.configurarSistema();
	gameManager.inicializar();

	while (gameManager.bucle());
	gameManager.abandonarJuego();
	
	cin.get();
	return 0;
}