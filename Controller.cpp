#include "Controller.h"
#include <iostream>
using namespace std;

 

void Controller::CalularPedido(Model& m) {

	int grandes = 2, medianos = 1, pequeños = 1, ordenadas = 52;
  
	cout << "Usted tiene:" << endl;
	cout << "Cajas Grandes: " << grandes << endl;
	cout << "Cajas Medianas: " << medianos << endl;
	cout << "Cajas Pequeñas: " << pequeños << endl;
	cout << "Cajas Ordenadas: " << ordenadas << endl;
	cout << "Costo Total: " << m.getSumaDePares() << endl; 

	
}

void Controller::SumarPares(Model& m)
{
	 
	int numero, numeroDividido = 0;
	cout << "Ingresa un numero para dividir: ";
	cin >> numero;

	numeroDividido = m.getSumaDePares() / numero;

	cout << "La division es: " << m.getSumaDePares() << " / " << numero << "= " << numeroDividido << endl;
}

void Controller::anioViciesto()
{
	int anio;
	cout << "Ingresa Anio: "; cin >> anio;

	 
	
	if (anio % 4 == 0 and anio % 100 != 0 or anio % 400 == 0)
	{
		cout << "Anio Bisiesto" << endl;
	}
	else
	{
		cout << "Anio no Bisiesto" << endl;
	}
}

 