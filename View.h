#pragma once
#include "Model.h"

class View
{
	Model  m; /* Variable local donde estara  el modelo base */
public:
	View(Model _m) {
		 m = _m;
	}
	void Menu(); /* Menu de la interaccion del usuario */

	void VolverAlInicio(); /* funcion para regresar al menu borrando la pantalla */
};

