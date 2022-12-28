#include "View.h"
#include <iostream>
#include "Controller.h"
using namespace std;
 
 
void View::Menu()
{
	Controller c;
	 
	cout << "Elije una opcion:" << endl;
	cout << "1. Calcular Pedido." << endl;
	cout << "2. Sumar Pares." << endl;
	cout << "3. Calcular Bisiesto" << endl;
	cout << "4. Salir " << endl;
		int opcion;
		cin >> opcion;

		switch (opcion)
		{
		case 1:
			c.CalularPedido(m);
			VolverAlInicio();
			break;
		case 2:
			c.SumarPares(m);
			VolverAlInicio();
			break;
		case 3:
			c.anioViciesto();
			VolverAlInicio();
			break;
		case 4:
			system(0);
			break;
		default:
			break;
		}

	 
	
}
