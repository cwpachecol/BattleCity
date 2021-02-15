#include <iostream>
#include "GameManager.h"
#include "SistemaRenderizacion.h"
#include <vector>
#include <set>
#include <map>
#include "InterfaceConsola\Panel.h"
#include "InterfaceConsola\Menu.h"
#include "InterfaceConsola\MenuItem.h"
#include "FabricaNiveles.h"
#include "FabricaNivel0.h"
#include "FabricaNivel1.h"

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

	//SistemaRenderizacion* sr = new SistemaRenderizacion();

	//sr->inicializar();

	/*Panel* p = new Panel();
	p->inicializar(10, 5, 15, 20, 2, 176, ColorConsola_Azul, ColorConsola_Amarillo, 177, ColorConsola_Blanco, ColorConsola_Cafe, ColorConsola_Amarillo, ColorConsola_AzulOscuro);
	p->setTexto("Panel prueba");
	p->renderizar(sr);*/

	//Menu* mRoot = new Menu();
	//mRoot->inicializar(1, 1, 22, 14, 1, 176, ColorConsola_Azul, ColorConsola_Amarillo, 177, ColorConsola_Rojo, ColorConsola_CelesteOscuro, ColorConsola_Blanco, ColorConsola_GrisOscuro);
	//mRoot->setTexto("Menu principal");
	//mRoot->renderizar(sr);
	//Menu* mSubMenu1 = new Menu();
	//mSubMenu1->inicializar(35, 1, 15, 8, 1, 177, ColorConsola_Azul, ColorConsola_Amarillo, 178, ColorConsola_Blanco, ColorConsola_Cafe, ColorConsola_Amarillo, ColorConsola_Azul);
	//mSubMenu1->setTexto("Submenu 01");
	////mSubMenu1->renderizar(sr);
	//Menu* mSubMenu2 = new Menu();
	//mSubMenu2->inicializar(35, 15, 15, 8, 1, 177, ColorConsola_Azul, ColorConsola_Amarillo, 178, ColorConsola_Blanco, ColorConsola_Cafe, ColorConsola_AzulOscuro, ColorConsola_Blanco);
	//mSubMenu2->setTexto("Submenu 02");
	////mSubMenu2->renderizar(sr);
	//Menu* mSubMenu3 = new Menu();
	//mSubMenu3->inicializar(55, 1, 12, 3, 1, 178, ColorConsola_Azul, ColorConsola_Amarillo, 176, ColorConsola_Blanco, ColorConsola_Cafe, ColorConsola_CelesteOscuro, ColorConsola_GrisOscuro);
	//mSubMenu3->setTexto("Submenu 03");
	////mSubMenu3->renderizar(sr);
	//MenuItem* mi01 = new MenuItem();
	//mi01->inicializar(75, 1, 12, 3, 1, 219, ColorConsola_Azul, ColorConsola_Amarillo, 240, ColorConsola_Blanco, ColorConsola_Cafe, ColorConsola_Azul, ColorConsola_RojoOscuro);
	////mi01->renderizar(sr);

	//mSubMenu3->agregarItem(mi01);
	//mSubMenu2->agregarItem(mSubMenu3);
	////mSubMenu2->renderizar(sr);
	//mRoot->agregarItem(mSubMenu1);
	//mRoot->agregarItem(mSubMenu2);

	/*
	MenuItem* mi01 = new MenuItem();
	mi01->inicializar(1, 1, 20, 3, 1, 219, ColorConsola_Azul, ColorConsola_Amarillo, 240, ColorConsola_Blanco, ColorConsola_Cafe, ColorConsola_Azul, ColorConsola_RojoOscuro);
	mi01->setTexto("Iniciar");
	MenuItem* mi02 = new MenuItem();
	mi02->inicializar(1, 5, 20, 3, 1, 219, ColorConsola_Azul, ColorConsola_Amarillo, 240, ColorConsola_Blanco, ColorConsola_Cafe, ColorConsola_Azul, ColorConsola_RojoOscuro);
	mi02->setTexto("Numero jugadores");
	MenuItem* mi03 = new MenuItem();
	mi03->inicializar(1, 9, 20, 3, 1, 219, ColorConsola_Azul, ColorConsola_Amarillo, 240, ColorConsola_Blanco, ColorConsola_Cafe, ColorConsola_Azul, ColorConsola_RojoOscuro);
	mi03->setTexto("Creditos");
	MenuItem* mi04 = new MenuItem();
	mi04->inicializar(1, 13, 20, 3, 1, 219, ColorConsola_Azul, ColorConsola_Amarillo, 240, ColorConsola_Blanco, ColorConsola_Cafe, ColorConsola_Azul, ColorConsola_RojoOscuro);
	mi04->setTexto("Salir");
	mRoot->agregarItem(mi01);
	mRoot->agregarItem(mi02);
	mRoot->agregarItem(mi03);
	mRoot->agregarItem(mi04);
	
	mRoot->renderizar(sr);



	sr->ejecutar();
	int opcion = mRoot->Bucle(sr);
	sr->limpiar();
	cout << opcion << endl;

	cin.get();

	*/
	
	GameManager* gameManager = GameManager::getInstancia();

	gameManager->configurarSistema();

	////gameManager->inicializar(new FabricaNivel1(gameManager));
	gameManager->inicializar(new FabricaNivel0(gameManager));

	while (gameManager->bucle());
	gameManager->abandonarJuego();
	
	cin.get();
	return 0;
}