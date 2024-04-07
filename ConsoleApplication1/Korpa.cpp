#include "Korpa.h"

Korpa::Korpa() {
	maksimalnaMasa = brojMesta = popunjenaMesta = 0;
}

Korpa::Korpa(float maksimalnaMasa, int brojMesta) {
	zauzmi(maksimalnaMasa, brojMesta);
}

Korpa::Korpa(const Korpa& k) {
	this->maksimalnaMasa = k.maksimalnaMasa;
	this->brojMesta = brojMesta;
}

void Korpa::sit(Skijas& s) {
	if (popunjenaMesta < brojMesta) {
		skijas[popunjenaMesta++] = s;
	}
}

bool Korpa::senzor() {
	float suma = 0.0f;
	for (int i = 0; i < popunjenaMesta; i++) 
		suma += skijas[i].getTezinaSkijasa();
	(suma < maksimalnaMasa) ? true : false;
}

Korpa::~Korpa() {
	maksimalnaMasa = 0;
}

void Korpa::zauzmi(float maksimalnaMasa, int brojMesta) {
	this->brojMesta = brojMesta;
	this->maksimalnaMasa = maksimalnaMasa;
	this->popunjenaMesta = 0;
	skijas[4];
}

std::ostream& operator<<(std::ostream& out, Korpa k) {
	out << "Svaka korpa je maksimalne tezinie: ";
	return out << k.maksimalnaMasa << std::endl;
}
