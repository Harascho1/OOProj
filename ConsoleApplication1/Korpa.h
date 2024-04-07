#pragma once
#include <iostream>

#include "Skijas.h"

class Korpa {

public:
	Korpa();
	Korpa(float maksimalnaMasa);
	Korpa(const Korpa& k);
	void sit(Skijas& s);
	inline float getMaksimalnaMasaKorpe() { return maksimalnaMasa; }
	inline float getOpterecenje() { return this->skijas.getTezinaSkijasa(); }
	inline bool senzor() { return this->skijas.getTezinaSkijasa() > maksimalnaMasa; }
	~Korpa();


	friend std::ostream& operator<<(std::ostream& out, Korpa k);

private:
	Skijas skijas;
	float maksimalnaMasa;
};

