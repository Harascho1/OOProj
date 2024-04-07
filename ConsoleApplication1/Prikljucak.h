#pragma once

#include <iostream>

#include "Sedista.h"

class Prikljucak {

public:

	Prikljucak();
	Prikljucak(const char* nazivPrikljucka);
	void add(Sedista& s);
	float TezinaSvihSedista();
	~Prikljucak();
	inline char* getNazivPrikljucka() { return nazivPrikljucka; }
	friend std::ostream& operator<<(std::ostream& out, Prikljucak& p);

private:
	char* nazivPrikljucka;
	Sedista** nizSedista;
	int n;
	int brojPrikljucaka;
	void zauzmi();
};

