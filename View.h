#pragma once
#include "Model.h"

class View
{
	Model  m;
public:
	View(Model _m) {
		 m = _m;
	}
	void Menu();

	void VolverAlInicio() {
		int opcion = 0;
		cout << "Desea volver al Inicio? 1.Si/ 2.No" << endl;
		cin >> opcion;

		if (opcion == 1 || opcion == 2)
		{
			system("cls");
			Menu();
			
		}
		else {
			VolverAlInicio();
		}
		
	}
};

