#include "Model.h"
#include "BolsaDeCafe.h"
#include <vector>
using namespace std;
 

Model::Model() {
	data.push_back(CajaGrande());
	data.push_back(CajaGrande());

	data.push_back(CajaMediana());

	data.push_back(CajaPequeña());

	data.push_back(CajaOrdenadas(52));
}

int Model::getSumaDePares() {
	int sumaDePares = 0;

	for (size_t i = 0; i < data.size(); i++)
	{
		sumaDePares += data[i].getPrecio();
	}

	return sumaDePares;
}