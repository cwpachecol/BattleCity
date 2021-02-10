#include "GeneradorEnemigo.h"
#include "Utilitarios.h"
#include "TanqueEnemigo.h"

GeneradorEnemigo::GeneradorEnemigo()
{
	setTipoActor(TipoActor_GeneradorEnemigo);
	generarTiempo = generadorEnemigosTiempoGeneracion;
	generarTemporizador = getRandomFloat(0.0, generarTiempo);

	setFisico(false);
}

void GeneradorEnemigo::actualizar(float _dt) {
	Actor::actualizar(_dt);

	generarTemporizador += _dt;

	if (generarTemporizador > generarTiempo) {
		generarTemporizador = 0.0f;

		int enemigosEnElNivel = getGameManager()->getConteoActores(TipoActor_TanqueEnemigo);
		int enemigosDeReserva = enemigosPorNivel - enemigosEnElNivel - getGameManager()->getConteoEnemigosMuertos();

		if (enemigosDeReserva > 0 && enemigosEnElNivel < enemigosPorNivelEnUnMomento) {
			//gameManager->crearActor(TipoActor_TanqueEnemigo, getX(), getY());
			
			TanqueEnemigo* tanqueEnemigo = getGameManager()->crearActor<TanqueEnemigo>(getX(), getY());
			//tanqueEnemigo->setAvatar(avatarTanqueEnemigo1);

		}
	}
}