#pragma once
#include "Korpa.h"

//Ovo je apstraktna klasa
class Sedista {
public:
	Sedista();
	Sedista(int broj,Korpa& k);
	virtual ~Sedista();


	void sit(Skijas& s);
	virtual float trenutnaTezina() = 0;
	

	void print(std::ostream& out);
	friend std::ostream& operator<<(std::ostream& out, Sedista& s);

protected:
	int broj;
	int slobodnaMesta = 4;
	int popunjenaMesta = 0;
	Korpa** nizKorpi;
	void zauzmi(int broj, Korpa& k);

};