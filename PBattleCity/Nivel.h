#pragma once

#include "SistemaRenderizacion.h"
#include "Direccion.h"
#include <map>
#include <vector>
#include <iostream>
#include "Actor.h"
using namespace std;

typedef vector<DatosSimboloConsola> vAvatarDireccion;
typedef map<Direccion, vAvatarDireccion> mAvatarDireccion;

// Datos del nivel 
const int filasNivel = filasPantalla;
const int columnasNivel = 110;

const unsigned char	celdaSimbolo_Jugador1 = '1';
const unsigned char	celdaSimbolo_Jugador2 = '2';
const unsigned char	celdaSimbolo_Tanque = 'E';
const unsigned char	celdaSimbolo_GeneradorEnemigo = 'S';

const unsigned char celdaSimbolo_Arbusto = '&';
const unsigned char celdaSimbolo_Charco = 'C';
const unsigned char celdaSimbolo_Pantano = 'P';
const unsigned char	celdaSimbolo_ParedLadrillo = '#';
const unsigned char	celdaSimbolo_ParedMetal = '@';
const unsigned char celdaSimbolo_Roca = 'R';
const unsigned char celdaSimbolo_Tronca = 'T';

const unsigned char	celdaSimbolo_Base = 'B';


const vector<string> mapaNivel0 ={
	string{"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"},
	string{"@S                                @@                              S                                @         @"},
	string{"@                                 @@                                                               @         @"},
	string{"@                                 @@                                                               @         @"},
	string{"@   ##   ##   @@@###### S   @@@        @@@ S   ######@@@   ##   ##            #######              @         @"},
	string{"@   #######   @@@######     @@@        @@@     ######@@@   #######            #    ##              @         @"},
	string{"@   #######&&&&&&&&&&&&&&&&&@@@        @@@                 #######            #   # #              @         @"},
	string{"@   ##   ##&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@                 ##   ##            #  #  #              @         @"},
	string{"@          &&&&&&&&&&&&&&&&&      @@                                          # #   #              @         @"},
	string{"@                @@@              @@              @@@                         #######              @         @"},
	string{"@                @@@              @@              @@@                                              @         @"},
	string{"@@@   @@@#####   ############            ############   #####@@@   @@  PPPPPPPPPPP                 @         @"},
	string{"@@@   @@@#####   ######@@######        ######@@######   #####@@@   @@  PPPPPPPPPPP                 @         @"},
	string{"@@@   @@@#####   ######@@@#####        #####@@@######   #####@@@   @@  PPPPPPPPPPP                 @         @"},
	string{"@                   ###@@@@@###@@    @@###@@@@@###                     PPPPPPPPPPP                 @         @"},
	string{"@                     #########@@@@@@@@#########                                &&&&               @         @"},
	string{"@                           ##############                                     &&&&&&&             @         @"},
	string{"@   ##   ##                    ########                    ##   ##              &&&&&&&&           @         @"},
	string{"@   #######                                                #######            &&&&&&&              @         @"},
	string{"@   #######   @@@######                        ######@@@   #######               &&&&&&&&          @         @"},
	string{"@   ##   ##   @@@######                        ######@@@   ##   ##                                 @         @"},
	string{"@                        2   ############ 1                                                        @         @"},
	string{"@                            ##B       ##                                                          @         @"},
	string{"@                            ##        ##                                                          @         @"},
	string{"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"}};																						              


const vector<string> mapaNivel1 ={
	string{"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"},
	string{"@S                                @@                              S                                @         @"},
	string{"@                                 @@                                                               @         @"},
	string{"@                                 @@                                                               @         @"},
	string{"@   ##   ##   @@@###### S   @@@        @@@ S   ######@@@   ##   ##                   #             @         @"},
	string{"@   #######   @@@######     @@@        @@@     ######@@@   #######                  ##             @         @"},
	string{"@   #######&                @@@        @@@                 #######                 # #             @         @"},
	string{"@   ##   ##                 @@@@@@@@@@@@@@                 ##   ##                   #             @         @"},
	string{"@                                 @@                                                 #             @         @"},
	string{"@                @@@              @@              @@@                     R         ###            @         @"},
	string{"@                @@@              @@              @@@                                              @         @"},
	string{"@@@   @@@#####   ############            ############   #####@@@   @@                              @         @"},
	string{"@@@   @@@#####   ######@@######        ######@@######   #####@@@   @@                              @         @"},
	string{"@@@   @@@#####   ######@@@#####        #####@@@######   #####@@@   @@                    T         @         @"},
	string{"@                   ###@@@@@###@@    @@###@@@@@###                                                 @         @"},
	string{"@                     #########@@@@@@@@#########                              &                    @         @"},
	string{"@                           ##############                                                         @         @"},
	string{"@   ##   ##                    ########                    ##   ##               &                 @         @"},
	string{"@   #######                                                #######                                 @         @"},
	string{"@   #######   @@@######                        ######@@@   #######   PPPPPPPPPPPPP        T        @         @"},
	string{"@   ##   ##   @@@######                        ######@@@   ##   ##   PPPPPPPPPPPPP                 @         @"},
	string{"@                        2   ############ 1                          PPPPPPPPPPPPP                 @         @"},
	string{"@                            ##B       ##                            PPPPPPPPPPPPP                 @         @"},
	string{"@                            ##        ##                                                          @         @"},
	string{"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"}};	

const vector<string> mapaNivel2 = {
	string{"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"},
	string{"@S                                @@                              S                                @         @"},
	string{"@                                 @@                                                               @         @"},
	string{"@                                 @@                                                               @         @"},
	string{"@   ##   ##   @@@###### S   @@@        @@@ S   ######@@@   ##   ##                #####            @         @"},
	string{"@   #######   @@@######     @@@        @@@     ######@@@   #######               #    #            @         @"},
	string{"@   #######&&&&&&&&&&&&&&&&&@@@        @@@                 #######                   #             @         @"},
	string{"@   ##   ##&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@                 ##   ##                 #               @         @"},
	string{"@          &&&&&&&&&&&&&&&&&      @@                                              #                @         @"},
	string{"@                @@@              @@              @@@                             #####            @         @"},
	string{"@                @@@              @@              @@@                                              @         @"},
	string{"@@@   @@@#####   ############            ############   #####@@@   @@                              @         @"},
	string{"@@@   @@@#####   ######@@######        ######@@######   #####@@@   @@                              @         @"},
	string{"@@@   @@@#####   ######@@@#####        #####@@@######   #####@@@   @@                              @         @"},
	string{"@                   ###@@@@@###@@    @@###@@@@@###                                                 @         @"},
	string{"@                     #########@@@@@@@@#########                         PPPPPPPPPPPPPP            @         @"},
	string{"@                           ##############                               PPPPPPPPPPPPPP            @         @"},
	string{"@   ##   ##                    ########                    ##   ##       PPPPPPPPPPPPPP            @         @"},
	string{"@   #######                                                #######       PPPPPPPPPPPPPP            @         @"},
	string{"@   #######   @@@######                        ######@@@   #######                                 @         @"},
	string{"@   ##   ##   @@@######                        ######@@@   ##   ##                                 @         @"},
	string{"@                        2   ############ 1                                                        @         @"},
	string{"@                            ##B       ##                                                          @         @"},
	string{"@                            ##        ##                                                          @         @"},
	string{"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"} };


//Paredes y arbustos
const vAvatarDireccion vAvatarNingunaParedLadrillo = {
	DatosSimboloConsola{(char)177, ColorConsola_Cafe, ColorConsola_Rojo} };
const mAvatarDireccion avatarParedLadrillo{ make_pair(Direccion{Direccion_Ninguna}, vAvatarNingunaParedLadrillo)};

const vAvatarDireccion vAvatarNingunaParedMetal = {
	DatosSimboloConsola{(char)254, ColorConsola_Gris, ColorConsola_GrisOscuro} };
const mAvatarDireccion avatarParedMetal{ make_pair(Direccion{Direccion_Ninguna}, vAvatarNingunaParedMetal) };


const vAvatarDireccion vAvatarNingunaArbustoN1 = {
	DatosSimboloConsola{(char)190, ColorConsola_Blanco, ColorConsola_VerdeOscuro} };
const mAvatarDireccion avatarArbustoN1{ make_pair(Direccion{Direccion_Ninguna}, vAvatarNingunaArbustoN1) };

const vAvatarDireccion vAvatarNingunaArbustoN2 = {
	DatosSimboloConsola{(char)190, ColorConsola_Blanco, ColorConsola_VerdeOscuro},
	DatosSimboloConsola{(char)190, ColorConsola_Blanco, ColorConsola_VerdeOscuro},
	DatosSimboloConsola{(char)190, ColorConsola_Blanco, ColorConsola_VerdeOscuro},
	DatosSimboloConsola{(char)13, ColorConsola_Blanco, ColorConsola_VerdeOscuro},
	DatosSimboloConsola{(char)190, ColorConsola_Blanco, ColorConsola_VerdeOscuro},
	DatosSimboloConsola{(char)13, ColorConsola_Blanco, ColorConsola_VerdeOscuro},
	DatosSimboloConsola{(char)190, ColorConsola_Blanco, ColorConsola_VerdeOscuro},
	DatosSimboloConsola{(char)190, ColorConsola_Blanco, ColorConsola_VerdeOscuro} };
const mAvatarDireccion avatarArbustoN2{ make_pair(Direccion{Direccion_Ninguna}, vAvatarNingunaArbustoN2) };


// Pantano
const vAvatarDireccion vAvatarNingunaPantanoN1 = {
	DatosSimboloConsola{(char)207, ColorConsola_Amarillo, ColorConsola_Cafe} };
const mAvatarDireccion avatarPantanoN1{ make_pair(Direccion{Direccion_Ninguna}, vAvatarNingunaPantanoN1) };

const vAvatarDireccion vAvatarNingunaPantanoN2 = {
	DatosSimboloConsola{(char)207, ColorConsola_Blanco, ColorConsola_Cafe} };
const mAvatarDireccion avatarPantanoN2{ make_pair(Direccion{Direccion_Ninguna}, vAvatarNingunaPantanoN2) };


//
//const unsigned char	paredLadrilloSimbolo = 177;
//const ColorConsola paredLadrilloColorSimbolo = ColorConsola_Cafe;
//const ColorConsola paredLadrilloColorFondo = ColorConsola_Rojo;
//
//const unsigned char	paredMetalSimbolo = 254;
//const ColorConsola paredMetalColorSimbolo = ColorConsola_Gris;
//const ColorConsola paredMetalColorFondo = ColorConsola_GrisOscuro;

// Tanque Jugador 1
const float fuegoTiempoEnfriamientoTanque = 0.5;
const int tamanoTanque = 3;

enum ColorTanque
{
	ColorTanque_0,
	ColorTanque_1,
	ColorTanque_2
};

struct CeldaImagenTanque
{
	unsigned char simbolo;
	ColorTanque colorSimbolo;
	ColorTanque colorFondo;
};

//JUGADOR NIVEL 01
const vAvatarDireccion vAvatarIzquierdaTanqueJugador1 = {
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)196, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)4, ColorConsola_Violeta, ColorConsola_Negro},
	DatosSimboloConsola{(char)221, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro} };

const vAvatarDireccion vAvatarDerechaTanqueJugador1 = {
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)221, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)4, ColorConsola_Violeta, ColorConsola_Negro},
	DatosSimboloConsola{(char)196, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro} };
	
const vAvatarDireccion vAvatarArribaTanqueJugador1 = {
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)179, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)219, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)4, ColorConsola_Violeta, ColorConsola_Negro},
	DatosSimboloConsola{(char)219, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)0, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro} };

const vAvatarDireccion vAvatarAbajoTanqueJugador1 = {
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)0, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)219, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)4, ColorConsola_Violeta, ColorConsola_Negro},
	DatosSimboloConsola{(char)219, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)179, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro} };


const mAvatarDireccion avatarTanqueJugador1{ make_pair(Direccion{Direccion_Izquierda}, vAvatarIzquierdaTanqueJugador1), 
make_pair(Direccion{Direccion_Derecha}, vAvatarDerechaTanqueJugador1), 
make_pair(Direccion{Direccion_Arriba}, vAvatarArribaTanqueJugador1),
make_pair(Direccion{Direccion_Abajo}, vAvatarAbajoTanqueJugador1) };


//JUGADOR NIVEL 02
const vAvatarDireccion vAvatarIzquierdaTanqueJugador1N2 = {
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)196, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)4, ColorConsola_Violeta, ColorConsola_Negro},
	DatosSimboloConsola{(char)221, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro}};

const vAvatarDireccion vAvatarDerechaTanqueJugador1N2 = {
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)221, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)4, ColorConsola_Violeta, ColorConsola_Negro},
	DatosSimboloConsola{(char)196, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro}};

const vAvatarDireccion vAvatarArribaTanqueJugador1N2 = {
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)179, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)219, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)219, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)4, ColorConsola_Violeta, ColorConsola_Negro},
	DatosSimboloConsola{(char)219, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)219, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)0, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro} };

const vAvatarDireccion vAvatarAbajoTanqueJugador1N2 = {
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)0, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)219, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)219, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)4, ColorConsola_Violeta, ColorConsola_Negro},
	DatosSimboloConsola{(char)219, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)219, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)179, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Amarillo, ColorConsola_Negro} };


const mAvatarDireccion avatarTanqueJugador1N2{ make_pair(Direccion{Direccion_Izquierda}, vAvatarIzquierdaTanqueJugador1N2),
make_pair(Direccion{Direccion_Derecha}, vAvatarDerechaTanqueJugador1N2),
make_pair(Direccion{Direccion_Arriba}, vAvatarArribaTanqueJugador1N2),
make_pair(Direccion{Direccion_Abajo}, vAvatarAbajoTanqueJugador1N2) };



//JUGADOR 02
const vAvatarDireccion vAvatarIzquierdaTanqueJugador2 = {
	DatosSimboloConsola{(char)220, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)196, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)4, ColorConsola_Violeta, ColorConsola_Negro},
	DatosSimboloConsola{(char)221, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Verde, ColorConsola_Negro} };

const vAvatarDireccion vAvatarDerechaTanqueJugador2 = {
	DatosSimboloConsola{(char)220, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)221, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)4, ColorConsola_Violeta, ColorConsola_Negro},
	DatosSimboloConsola{(char)196, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Verde, ColorConsola_Negro} };

const vAvatarDireccion vAvatarArribaTanqueJugador2 = {
	DatosSimboloConsola{(char)220, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)179, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)219, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)4, ColorConsola_Violeta, ColorConsola_Negro},
	DatosSimboloConsola{(char)219, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)0, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Verde, ColorConsola_Negro} };

const vAvatarDireccion vAvatarAbajoTanqueJugador2 = {
	DatosSimboloConsola{(char)220, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)0, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)219, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)4, ColorConsola_Violeta, ColorConsola_Negro},
	DatosSimboloConsola{(char)219, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)179, ColorConsola_Verde, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Verde, ColorConsola_Negro} };


const mAvatarDireccion avatarTanqueJugador2{ make_pair(Direccion{Direccion_Izquierda}, vAvatarIzquierdaTanqueJugador2),
make_pair(Direccion{Direccion_Derecha}, vAvatarDerechaTanqueJugador2),
make_pair(Direccion{Direccion_Arriba}, vAvatarArribaTanqueJugador2),
make_pair(Direccion{Direccion_Abajo}, vAvatarAbajoTanqueJugador2) };

//TANQUE ENEMIGO 01
const vAvatarDireccion vAvatarIzquierdaTanqueEnemigo1 = {
	DatosSimboloConsola{(char)220, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)196, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)4, ColorConsola_Violeta, ColorConsola_Negro},
	DatosSimboloConsola{(char)221, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Celeste, ColorConsola_Negro} };

const vAvatarDireccion vAvatarDerechaTanqueEnemigo1 = {
	DatosSimboloConsola{(char)220, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)221, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)4, ColorConsola_Violeta, ColorConsola_Negro},
	DatosSimboloConsola{(char)196, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Celeste, ColorConsola_Negro} };

const vAvatarDireccion vAvatarArribaTanqueEnemigo1 = {
	DatosSimboloConsola{(char)220, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)179, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)219, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)4, ColorConsola_Violeta, ColorConsola_Negro},
	DatosSimboloConsola{(char)219, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)0, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Celeste, ColorConsola_Negro} };

const vAvatarDireccion vAvatarAbajoTanqueEnemigo1 = {
	DatosSimboloConsola{(char)220, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)0, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)219, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)4, ColorConsola_Violeta, ColorConsola_Negro},
	DatosSimboloConsola{(char)219, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)179, ColorConsola_Celeste, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Celeste, ColorConsola_Negro} };


const mAvatarDireccion avatarTanqueEnemigo1{ make_pair(Direccion{Direccion_Izquierda}, vAvatarIzquierdaTanqueEnemigo1),
make_pair(Direccion{Direccion_Derecha}, vAvatarDerechaTanqueEnemigo1),
make_pair(Direccion{Direccion_Arriba}, vAvatarArribaTanqueEnemigo1),
make_pair(Direccion{Direccion_Abajo}, vAvatarAbajoTanqueEnemigo1) };


//TANQUE ENEMIGO 02
const vAvatarDireccion vAvatarIzquierdaTanqueEnemigo2 = {
	DatosSimboloConsola{(char)220, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)196, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)4, ColorConsola_Violeta, ColorConsola_Negro},
	DatosSimboloConsola{(char)221, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Rojo, ColorConsola_Negro} };

const vAvatarDireccion vAvatarDerechaTanqueEnemigo2 = {
	DatosSimboloConsola{(char)220, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)221, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)4, ColorConsola_Violeta, ColorConsola_Negro},
	DatosSimboloConsola{(char)196, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Rojo, ColorConsola_Negro} };

const vAvatarDireccion vAvatarArribaTanqueEnemigo2 = {
	DatosSimboloConsola{(char)220, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)179, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)219, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)4, ColorConsola_Violeta, ColorConsola_Negro},
	DatosSimboloConsola{(char)219, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)0, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Rojo, ColorConsola_Negro} };

const vAvatarDireccion vAvatarAbajoTanqueEnemigo2 = {
	DatosSimboloConsola{(char)220, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)0, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)220, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)219, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)4, ColorConsola_Violeta, ColorConsola_Negro},
	DatosSimboloConsola{(char)219, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)13, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)179, ColorConsola_Rojo, ColorConsola_Negro},
	DatosSimboloConsola{(char)223, ColorConsola_Rojo, ColorConsola_Negro} };


const mAvatarDireccion avatarTanqueEnemigo2{ make_pair(Direccion{Direccion_Izquierda}, vAvatarIzquierdaTanqueEnemigo2),
make_pair(Direccion{Direccion_Derecha}, vAvatarDerechaTanqueEnemigo2),
make_pair(Direccion{Direccion_Arriba}, vAvatarArribaTanqueEnemigo2),
make_pair(Direccion{Direccion_Abajo}, vAvatarAbajoTanqueEnemigo2) };



//const CeldaImagenTanque imagenTanqueNivel[Direccion_MAX][tamanoTanque][tamanoTanque] =
//{
//	// Izquierda
//	{
//		{ {220, ColorTanque_1, ColorTanque_0}, {220, ColorTanque_1, ColorTanque_0}, {220, ColorTanque_1, ColorTanque_0} },
//		{ {196, ColorTanque_2, ColorTanque_0}, {  4, ColorTanque_2, ColorTanque_1}, {221, ColorTanque_1, ColorTanque_0} },
//		{ {223, ColorTanque_1, ColorTanque_0}, {223, ColorTanque_1, ColorTanque_0}, {223, ColorTanque_1, ColorTanque_0} }
//	},
//	// Derecha
//	{
//		{ {220, ColorTanque_1, ColorTanque_0}, {220, ColorTanque_1, ColorTanque_0}, {220, ColorTanque_1, ColorTanque_0} },
//		{ {221, ColorTanque_1, ColorTanque_0}, {  4, ColorTanque_2, ColorTanque_1}, {196, ColorTanque_2, ColorTanque_0} },
//		{ {223, ColorTanque_1, ColorTanque_0}, {223, ColorTanque_1, ColorTanque_0}, {223, ColorTanque_1, ColorTanque_0} }
//	},
//	// Arriba
//	{
//		{ {220, ColorTanque_1, ColorTanque_0}, {179, ColorTanque_2, ColorTanque_0}, {220, ColorTanque_1, ColorTanque_0} },
//		{ {219, ColorTanque_1, ColorTanque_1}, {  4, ColorTanque_2, ColorTanque_1}, {219, ColorTanque_1, ColorTanque_1} },
//		{ {223, ColorTanque_1, ColorTanque_0}, {  0, ColorTanque_0, ColorTanque_0}, {223, ColorTanque_1, ColorTanque_0} }
//	},
//
//	// Abajo
//	{
//		{ {220, ColorTanque_1, ColorTanque_0}, {  0, ColorTanque_0, ColorTanque_0}, {220, ColorTanque_1, ColorTanque_0} },
//		{ {219, ColorTanque_1, ColorTanque_1}, {  4, ColorTanque_2, ColorTanque_1}, {219, ColorTanque_1, ColorTanque_1} },
//		{ {223, ColorTanque_1, ColorTanque_0}, {179, ColorTanque_2, ColorTanque_0}, {223, ColorTanque_1, ColorTanque_0} }
//	}
//};
//

/////////////////////////////////////
// Datos jugador
const int energiaJugador = 16;
const int velocidadJugador = 10;


/////////////////////////////////////
// Datos enemigos
const int enemigosPorNivel = 24;
const int enemigosPorNivelEnUnMomento = 6;
const int energiaEnemigo = 5;
const int velocidadEnemigo = 5;
const float generadorEnemigosTiempoGeneracion = 10.0;
const float tiempoAnalisisIAEnemiga = 0.5;


/////////////////////////////////////
// Datos base
const int columnasBase = 8;
const int filasBase = 2;
const int energiaBase = 3;

const ColorConsola bc0 = ColorConsola_Negro;
const ColorConsola bc1 = ColorConsola_Gris;
const ColorConsola bc2 = ColorConsola_Rojo;
const ColorConsola bc3 = ColorConsola_RojoOscuro;

const DatosSimboloConsola imagenBaseNormal[filasBase][columnasBase] =
{
	{ { 17, bc2, bc0}, {221, bc1, bc0}, {254, bc0, bc3}, {254, bc0, bc3}, {254, bc0, bc3}, {254, bc0, bc3}, {221, bc1, bc0}, { 16, bc2, bc0} },
	{ {  0, bc0, bc0}, {221, bc1, bc0}, {254, bc0, bc3}, {176, bc0, bc1}, {176, bc0, bc1}, {254, bc0, bc3}, {221, bc1, bc0}, {  0, bc0, bc0} }
};

const DatosSimboloConsola imagenBaseDanada[filasBase][columnasBase] =
{
	{ {  0, bc0, bc0}, {  0, bc0, bc0}, {254, bc0, bc3}, {254, bc0, bc3}, {  0, bc0, bc0}, {254, bc0, bc3}, {221, bc1, bc0}, { 16, bc2, bc0} },
	{ {  0, bc0, bc0}, {221, bc1, bc0}, {254, bc0, bc3}, {176, bc1, bc0}, {176, bc1, bc0}, {254, bc0, bc3}, {221, bc1, bc0}, {  0, bc0, bc0} }
};

const DatosSimboloConsola imagenBaseDestruida[filasBase][columnasBase] =
{
	{ {  0, bc0, bc0}, {  0, bc0, bc0}, {  0, bc0, bc0}, {254, bc0, bc3}, {'_', bc3, bc0}, {254, bc0, bc3}, {  0, bc0, bc0}, {  0, bc0, bc0} },
	{ {  0, bc0, bc0}, {  0, bc0, bc0}, {254, bc0, bc3}, {  0, bc0, bc0}, {'/', bc1, bc0}, {254, bc0, bc3}, {221, bc1, bc0}, {  0, bc0, bc0} }
};

//Datos municion
const float velocidadMunicion = 10.0;
const vAvatarDireccion vAvatarNingunaMunicion = {
	DatosSimboloConsola{(char)250, ColorConsola_Cafe, ColorConsola_Rojo} };
const mAvatarDireccion avatarMunicion{ make_pair(Direccion{Direccion_Ninguna}, vAvatarNingunaMunicion) };


// Datos bala
const float velocidadBala = 30.0;

const vAvatarDireccion vAvatarNingunaBala = {
	DatosSimboloConsola{(char)42, ColorConsola_Blanco, ColorConsola_Negro} };
const mAvatarDireccion avatarBala{ make_pair(Direccion{Direccion_Ninguna}, vAvatarNingunaBala) };
