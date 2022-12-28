#pragma once
#include <vector>
#include <iostream>
#include "BolsaDeCafe.h"
using namespace std;

class Model
{
	vector<BolsaDeCafe>data;  
public:
	Model();
	vector<BolsaDeCafe>& getData() { return data; }
	

	int getSumaDePares() {
		int sumaDePares = 0;
		 
		for (size_t i = 0; i < data.size(); i++)
		{
			sumaDePares += data[i].getPrecio();
		}
		 
		return sumaDePares;
	}
};

