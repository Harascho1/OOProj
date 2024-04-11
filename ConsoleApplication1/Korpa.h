#pragma once
#include <iostream>

#include "Skijas.h"


//Ovo je zapravo apstrkatno
class Korpa {

public:
	Korpa();
	Korpa(float maksimalnaMasa, int brojMesta);
	Korpa(const Korpa& k);
	void sit(Skijas& s);
	inline int getPopunjenaMesta() { return this->popunjenaMesta; }
	float getMaksimalnaMasaKorpe();
	bool senzor();
	virtual void print(std::ostream& out);
	/*inline bool senzor() { return this->skijas.getTezinaSkijasa() > maksimalnaMasa; }*/
	~Korpa();


	friend std::ostream& operator<<(std::ostream& out, Korpa& k);

protected:
	Skijas* skijas;
	float maksimalnaMasa;
	int brojMesta;
	int popunjenaMesta;
	void zauzmi(float maksimalnaMasa, int brojMesta);
};

