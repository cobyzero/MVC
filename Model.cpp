#include "Model.h"
#include "BolsaDeCafe.h"
#include <vector>
using namespace std;
 

Model::Model() {

	/* Crea la cantidad de cajas pedidas y las agrega a Data */

	/* 2 cajas grandes */
	data.push_back(CajaGrande());
	data.push_back(CajaGrande());

	/* 1 cajas medianas */
	data.push_back(CajaMediana());

	/* 2 cajas pequeñas */
	data.push_back(CajaPequeña());

	/* 52 cajas ordenadas */
	data.push_back(CajaOrdenadas(52));
}

/* 
suma los pares del vector Data 
*/
int Model::getSumaDePares() {
	int sumaDePares = 0;

	for (size_t i = 0; i < data.size(); i++)
	{
		sumaDePares += data[i].getPrecio();
	}

	return sumaDePares;
}