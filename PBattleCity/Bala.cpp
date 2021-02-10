#include "Bala.h"

Bala::Bala() {
	setTipoActor(TipoActor_Bala);
	setEnergia(energiaEnemigo);
	velocidad = velocidadBala;
	setDireccion(Direccion_Ninguna);
	setAvatar(avatarBala);
}

void Bala::actualizar(float _dt) {
	//Municion::actualizar(_dt);
	Actor::actualizar(_dt);
}

void Bala::renderizar(SistemaRenderizacion* _sistemaRenderizacion) {
	//Municion::renderizar(_sistemaRenderizacion);
	Actor::renderizar(_sistemaRenderizacion);
}

void Bala::intersectar(Actor* _actor) {
	Municion::intersectar(_actor);
}

