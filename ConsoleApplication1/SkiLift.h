#pragma once
#include "Korpa.h"
class SkiLift{
public:
	
	SkiLift();
	SkiLift(const char* nazivSkiLifta, int ukupanKapacitetZice);
	SkiLift(const SkiLift& sl);
	~SkiLift();
	void add(Korpa* p);
	void pop();
	void promeniBrojPikljucka(int n);
	float TezinaSvihSedista();
	Korpa* NajveceOpterecenje();
	void sacuvajStanje(const char* imeFajla);



	friend std::ostream& operator<<(std::ostream& out, SkiLift& s);

private:
	char* tipPrikljucka;
	char* nazivSkiLifta;
	int brojPrikljucka = 0;
	Korpa** nizPrikljucka;
	int n;
	void zauzmi(int n);
	void oslobodi();
	

};

