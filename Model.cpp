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