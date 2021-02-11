#include "GeneradorEnemigo.h"
#include "Utilitarios.h"
#include "TanqueEnemigo1.h"
#include "TanqueEnemigo2.h"

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
			
			switch (getGameManager()->getNivel()) {
			case 0: {
				TanqueEnemigo1* tanqueEnemigo = getGameManager()->crearActor<TanqueEnemigo1>(getX(), getY());
				break;
			}
			case 1: {
				TanqueEnemigo2* tanqueEnemigo = getGameManager()->crearActor<TanqueEnemigo2>(getX(), getY());
				break;
			}
			}
			//tanqueEnemigo->setAvatar(avatarTanqueEnemigo1);

		}
	}
}