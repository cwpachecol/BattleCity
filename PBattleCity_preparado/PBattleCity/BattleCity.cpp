#include <iostream>
#include "GameManager.h"
#include "SistemaRenderizacion.h"
#include <vector>
#include <set>
#include <map>
#include "InterfaceConsola\Panel.h"
#include "InterfaceConsola\Menu.h"
#include "InterfaceConsola\MenuItem.h"

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
	//El antes de GameManager sin Singleton
	//GameManager gameManager;

	/*Panel* p = new Panel();
	p->mostrar();*/

	Menu* mroot = new Menu();
	mroot->setTexto("");
	//m->mostrar();

	Menu* m1 = new Menu();
	m1->setTexto("Submenu 1");
	
	Menu* m2 = new Menu();
	m2->setTexto("Submenu 2");

	MenuItem* mi1 = new MenuItem();
	mi1->setTexto("opcion 1");

	MenuItem* mi2 = new MenuItem();
	mi2->setTexto("opcion 2");

	MenuItem* mi3 = new MenuItem();
	mi3->setTexto("opcion 3");

	MenuItem* mi4 = new MenuItem();
	mi4->setTexto("opcion 4");

	MenuItem* mi5 = new MenuItem();
	mi5->setTexto("opcion 5");

	MenuItem* mi6 = new MenuItem();
	mi6->setTexto("opcion 6");

	MenuItem* mi7 = new MenuItem();
	mi7->setTexto("opcion 7");

	MenuItem* mi8 = new MenuItem();
	mi8->setTexto("opcion 8");

	m1->agregarMenuItem(mi1);
	m1->agregarMenuItem(mi2);

	m2->agregarMenuItem(mi3);
	m2->agregarMenuItem(mi4);
	m2->agregarMenuItem(mi5);

	mroot->agregarMenuItem(m1);
	mroot->agregarMenuItem(m2);
	mroot->agregarMenuItem(mi6);
	mroot->agregarMenuItem(mi7);
	mroot->agregarMenuItem(mi8);


	mroot->mostrar();
	//GameManager* gameManager = GameManager::getInstancia();

	//gameManager->configurarSistema();
	//gameManager->inicializar();

	//while (gameManager->bucle());
	//gameManager->abandonarJuego();
	
	cin.get();
	return 0;
}