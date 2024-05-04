#pragma once
#include <iostream>

using namespace std;

class LANCHA
{
	private:
		int velocidad;
		int distanciaRecorrida;
		int nitro;
		string Nombre;

public:
	LANCHA(int velocidad, int distanciaRecorrida, int nitro, string Nombre);

	int getvelocidad();
	void setvelocidad(int pvelociad, int lanzarDado, int pdistanciaRecorrida, string pnitrouse, int nitro);

	int getdistanciaRecorrida();
	void setdistanciaRecorrida(int pdistanciaRecorrida, int pvelociad);

	int getnitro();
	void setnitro(int pvelocidad, int distanciaRecorrida);

	string getNombre();
	void setNombre();




	

	

};

