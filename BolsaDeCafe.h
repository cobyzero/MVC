#pragma once
class BolsaDeCafe
{
protected:
	int precio;
public: 
	  int getPrecio() {return precio;}
};

class CajaGrande : public BolsaDeCafe{
public:
	CajaGrande() {
		precio = 5000;
	}
 
}; 

class CajaMediana : public BolsaDeCafe {
public:
	CajaMediana() {
		precio = 3000;
	}
};

class CajaPequeña : public BolsaDeCafe {
public:
	CajaPequeña() {
		precio = 1000;
	}
};

class CajaOrdenadas : public BolsaDeCafe { 
public:
	CajaOrdenadas(int ordenes) {
		precio = ordenes * 1000;
	}
};