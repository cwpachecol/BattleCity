#include <iostream>
#include "GameManager.h"
#include "SistemaRenderizacion.h"
#include <vector>
#include <set>
#include <map>

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
	//set<int> s;

	//for (int i = 0; i < 10; i++) {
	//	s.insert(10 - i);

	//}

	//set<int>::iterator it;
	//it = s.find(6);

	//s.erase(it);

	//for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
	//	cout << *it << endl;
	//}

	//////////////////////////////////
	//vector<string> v_nombres;
	//set<string> s_nombres;
	//string nombre;
	//int i = 0;
	//while (i < 5) {
	//	cin >> nombre;
	//	v_nombres.push_back(nombre);
	//	s_nombres.insert(nombre);
	//	i = i + 1;
	//}
	//cout << "Numero de elementos en vector: " << v_nombres.size() << endl;
	//cout << "Numero de elementos en set: " << s_nombres.size() << endl;

	//////////////////////////////////
	//pair<char, int> x;
	//map<char, int> m;

	//for (char c = 'a'; c < 'z'; c++) {
	//	x.first = c;
	//	x.second = int(c);

	//	m.insert(x);
	//}

	//map<char, int>::iterator mi=m.begin();

	//for (mi = m.begin(); mi != m.end(); mi++) {
	//	cout << (*mi).first << " " << (*mi).second << endl;
	//}
	//
	//cout << "Buscando un valor" << endl;
	//mi = m.find('h');
	//cout << (*mi).second << endl;


	//system("pause");
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