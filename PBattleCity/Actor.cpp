#include "Actor.h"

int Actor::numeroActores = 0;

//int Actor::getNumeroActores() {
//	return numeroActores;
//}

Actor::Actor():Objeto()
{
	gameManager = nullptr;
	//gameManager = 0;
	numeroActores++;
	numeroActor = numeroActores;
	tipoActor = TipoActor_None;
	xVelocidad = 0.0;
	yVelocidad = 0.0;
	setAncho(1.0f);
	setAlto(1.0f);
	energia = 1;
	limiteSuperiorEnergia = 10;
	limiteInferiorEnergia = 1;
	destruirDespuesMuerte = true;
	invulnerable = false;
	fisico = true;

	direccion = Direccion_Ninguna;
}

//Actor::Actor(float _x = 0.0, float _y = 0.0, float _xVelocidad = 0.0, float _yVelocidad = 0.0, int _ancho = 1, int _alto = 1, int _energia = 1)
Actor::Actor(float _x , float _y, float _xVelocidad, float _yVelocidad, int _ancho, int _alto, int _energia):Objeto(_x, _y)
{
	gameManager = nullptr;
	numeroActores++;
	numeroActor = numeroActores;
	tipoActor = TipoActor_None;

	xVelocidad = _xVelocidad;
	yVelocidad = _yVelocidad;
	setAncho(_ancho);
	setAlto(_alto);
	energia = _energia;
	destruirDespuesMuerte = true;
	invulnerable = false;
	fisico = true;

	direccion = Direccion_Arriba;
}

Actor::Actor(GameManager* _gameManager, TipoActor _tipoActor, float _x, float _y, float _xVelocidad, float _yVelocidad, int _ancho, int _alto, 
	int _energia, bool _destrirDespuesMuerte, bool _invulnerable, bool _fisico, Direccion _direccion):Objeto(_x,_y)
{
	gameManager = _gameManager;
	numeroActores++;
	numeroActor = numeroActores;
	tipoActor = _tipoActor;

	xVelocidad = _xVelocidad;
	yVelocidad = _yVelocidad;
	setAncho(_ancho);
	setAlto(_alto);
	energia = _energia;
	destruirDespuesMuerte = _destrirDespuesMuerte;
	invulnerable = _invulnerable;
	fisico = _fisico;

	direccion = _direccion;
}


void Actor::renderizar(SistemaRenderizacion* _sistemaRenderizacion)
{
	int auxAlto = 0;
	int auxAncho = 0;
	
	if (avatar.size() > 0) {
		itavatar = avatar.find(direccion);
		vector<DatosSimboloConsola>::iterator iia;

		int fila = int(getY());
		int columna = int(getX());

		for(iia = (*itavatar).second.begin(); iia != (*itavatar).second.end(); ++iia){
			_sistemaRenderizacion->dibujarCaracter(fila, columna, (*iia).simbolo, (*iia).colorSimbolo, (*iia).colorFondo);

			if ((*iia).simbolo == 13){
				fila++;
				columna = int(getX());
			}
			else {
				if (columna > auxAncho) {
				auxAncho = columna;
				}
				columna++;
			}
		}

		auxAlto = fila;
	}

	setAncho(float(auxAncho - int(getX()) + 1));
	setAlto(float(auxAlto - int(getY()) + 1));

	/*int _ancho = auxAncho - int(getX());
	int _alto = auxAlto - int(getY());
	setAncho(float(_ancho + 1));
	setAlto(float(_alto + 1));
	*/
}

void Actor::actualizar(float _dt)
{
	int filaAnterior = int(getY());
	int columnaAnterior = int(getX());

	float yNueva = getY() + yVelocidad * _dt;
	float xNueva = getX() + xVelocidad * _dt;

	int filaNueva = int(yNueva);
	int columnaNueva = int(xNueva);

	if (columnaAnterior != columnaNueva)
		gameManager->moverActorA(this, xNueva, getY());
	else
		setX(xNueva);

	if (filaAnterior != filaNueva)
		gameManager->moverActorA(this, getX(), yNueva);
	else
		setY(yNueva);
}


void Actor::intersectar(Actor* _actor)
{

}

void Actor::hacerDano(int _dano)
{
	if (getInvulnerable())
		return;

	if (energia > _dano)
		energia -= _dano;
	else
		energia = 0;
}

void Actor::cargarEnergia(int _energia)
{
	if (getInvulnerable())
		return;

	if (energia < limiteSuperiorEnergia)
		energia += _energia;

	if (energia > limiteSuperiorEnergia)
		energia = limiteSuperiorEnergia;
}
