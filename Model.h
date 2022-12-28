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
	

	int getSumaDePares();
		 
};

