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


void View::VolverAlInicio() {
	int opcion = 0;
	cout << "Desea volver al Inicio? 1.Si/ 2.No" << endl;
	cin >> opcion;

	if (opcion == 1  )
	{
		system("cls"); /* pone en la consola cls que es limpiar consola */
		Menu(); /* accede nuevamente*/

	}
	else if (opcion == 2) {
		system(0); /* termina el programa */
	}
	else {
		VolverAlInicio(); /* vuelve a entrar ala misma funcion si pone un dato diferente como un bucle */
	}

}