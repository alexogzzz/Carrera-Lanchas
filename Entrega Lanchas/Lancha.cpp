#include "Lancha.h"

LANCHA::LANCHA (int pvelocidad, int pdistanciaRecorrida, int pnitro, string pNombre) {

	velocidad = pvelocidad;
	distanciaRecorrida = pdistanciaRecorrida;
	nitro = pnitro;
	Nombre = pNombre;

}

int LANCHA::getvelocidad() {

	return velocidad;

}

void LANCHA::setvelocidad(int pvelociad, int lanzarDado, int pdistanciaRecorrida, string pnitrouse, int nitro) {

	velocidad += lanzarDado;

	if (pnitrouse == "s") {

		if (nitro == 1) {
			cout << "El nitro funciono correctamente \n";
			velocidad *= 2;

		}
		else if (nitro == 0) {
			cout << "El nitro fallo \n";
			velocidad /= 2;
		}

	}


}

int LANCHA::getdistanciaRecorrida() {

	return distanciaRecorrida;

}

void LANCHA::setdistanciaRecorrida(int pdistanciaRecorrida, int pvelociad) {

	distanciaRecorrida = pdistanciaRecorrida + pvelociad * 100;

}

int LANCHA::getnitro() {

	return nitro;

}

void LANCHA::setnitro(int pvelocidad, int distanciaRecorrida) {

	nitro = rand() % 2;
}

string LANCHA::getNombre() {

	return Nombre;

}



