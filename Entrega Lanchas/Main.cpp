// Objetos teoria.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Lancha.h"
using namespace std;
int lanzarDado() {

	return 1 + rand() % 6;
}
int main()
{
	srand(time(NULL));


	LANCHA lancha1 = LANCHA(0, 0, 0, " Goku ");
	LANCHA lancha2 = LANCHA(0, 0, 0, " Vegeta ");
	
	int dado;
	for (size_t i = 0; i < 5; i++)
	{
		string nitrouse;
		int decision;

		if (decision == nitrouse) {
			
			cout << "Quieres usar el nitro (s/n)";
			cin >> nitrouse;

			if (nitrouse == "s") {

				nitro = null; 
			}
		}

		
		

		dado = lanzarDado();

		cout << "Dado: " << dado << "\n";

		lancha1.setvelocidad(lancha1.getvelocidad(), dado, lancha1.getdistanciaRecorrida(), nitrouse, lancha1.getnitro());
		lancha1.setdistanciaRecorrida(lancha1.getdistanciaRecorrida(), lancha1.getvelocidad());

		cout << "Tu velocidad:" << lancha1.getvelocidad() << "\n";
		cout << "Tu distancia recorrida:" << lancha1.getdistanciaRecorrida() << "\n";

		cout << "\n";
		
		dado = lanzarDado();
		cout << "Dado del rival: " << dado << "\n";
		lancha2.setvelocidad(lancha2.getvelocidad(), dado, lancha2.getdistanciaRecorrida(), nitrouse, lancha2.getnitro());
		lancha2.setdistanciaRecorrida(lancha2.getdistanciaRecorrida(), lancha2.getvelocidad());


		cout << "La velocidad del rival: " << lancha2.getvelocidad() << "\n";
		cout << "Distancia recorrida del rival:" << lancha2.getdistanciaRecorrida() << "\n";

		system("pause");
		system("cls");
	}

	if (lancha1.getdistanciaRecorrida() > lancha2.getdistanciaRecorrida()) {
		cout << "La lancha de" << lancha1.getNombre() << "ha ganado\n";
	}
	else if (lancha1.getdistanciaRecorrida() < lancha2.getdistanciaRecorrida()) {
		cout << "La lancha de" << lancha2.getNombre() << "ha ganado\n";
	}
	else {
		cout << "Ha habido un empate\n";
	}
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
