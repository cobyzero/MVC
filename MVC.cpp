// MVC.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include "Model.h"
#include "Controller.h"
#include "View.h"
using namespace std;

 


int main()
{
	   
	Model model = Model();
	View v = View(model);


	v.Menu();
}
 

