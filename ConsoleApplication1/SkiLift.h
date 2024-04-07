#pragma once
#include "Sedista.h"
class SkiLift {
public:
	
	SkiLift();
	SkiLift(const char* nazivSkiLifta, int ukupanKapacitetZice);
	SkiLift(const SkiLift& sl);
	~SkiLift();
	void add(Sedista* p);
	void pop();
	float TezinaSvihSedista();
	Sedista* NajveceOpterecenje();

	void sacuvajStanje(const char* imeFajla);



	friend std::ostream& operator<<(std::ostream& out, SkiLift& s);

private:
	char* tipPrikljucka;
	char* nazivSkiLifta;
	int brojPrikljucka = 0;
	Sedista** nizPrikljucka;
	int n;
	void zauzmi(int n);
	void oslobodi();

};

