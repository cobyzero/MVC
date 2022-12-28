#pragma once
#include <vector>
#include <iostream>
#include "BolsaDeCafe.h"
using namespace std;

class Model
{
	/* Data de todo el programa */
	vector<BolsaDeCafe>data;  
public:
	Model(); /* constructor */
	vector<BolsaDeCafe>& getData() { return data; } /* get de Data */
	
	/* calcula la suma de pares y devuelve el valor */
	int getSumaDePares();
		 
};

