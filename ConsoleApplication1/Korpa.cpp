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

float Korpa::getMaksimalnaMasaKorpe() {
	float suma = 0.0f;
	for (int i = 0; i < popunjenaMesta; i++)
		suma += skijas[i].getTezinaSkijasa();
	return suma;
}

bool Korpa::senzor() {
	float suma = 0.0f;
	for (int i = 0; i < popunjenaMesta; i++) 
		suma += skijas[i].getTezinaSkijasa();
	if (suma < maksimalnaMasa)
		return false;
	return true;
}

void Korpa::print(std::ostream& out) {
	out << "Ova korpa ima "<<brojMesta<< " sedista" << std::endl;
}

Korpa::~Korpa() {
	maksimalnaMasa = 0;
}

void Korpa::zauzmi(float maksimalnaMasa, int brojMesta) {
	this->brojMesta = brojMesta;
	this->maksimalnaMasa = maksimalnaMasa;
	this->popunjenaMesta = 0;
	skijas = new Skijas[this->brojMesta];
}

std::ostream& operator<<(std::ostream& out,Korpa& k) {
	k.print(out);
	return out;
}