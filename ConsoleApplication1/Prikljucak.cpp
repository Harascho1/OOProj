#include "Prikljucak.h"

Prikljucak::Prikljucak() {
	nazivPrikljucka = nullptr;
	nizSedista = nullptr;
	n = brojPrikljucaka = 0;
}

Prikljucak::Prikljucak(const char* nazivPrikljucka) {
	this->nazivPrikljucka = new char[strlen(nazivPrikljucka) + 1];
	strcpy(this->nazivPrikljucka, nazivPrikljucka);
	zauzmi();
}

void Prikljucak::add(Sedista& s) {
	
	if (brojPrikljucaka >= n)
		std::cout << "nemas Prikljucke";
	else
		nizSedista[brojPrikljucaka++] = &s;
}

float Prikljucak::TezinaSvihSedista() {
	float suma = 0;
	for (int i = 0; i < brojPrikljucaka; i++) {
		suma += nizSedista[i]->trenutnaTezina();
	}
	return suma;
}

Prikljucak::~Prikljucak() {
	if (nazivPrikljucka != nullptr)
		delete[] nazivPrikljucka;
	if (nizSedista != nullptr)
		delete[] nizSedista;
}

void Prikljucak::zauzmi() {
	brojPrikljucaka = 0;
	nizSedista = new Sedista*[1];
	nizSedista[0] = nullptr;
	this->n = 1;

}

std::ostream& operator<<(std::ostream& out, Prikljucak& p) {
	for (int i = 0; i < p.brojPrikljucaka; i++) {
		out << *p.nizSedista[i] << std::endl;
	}
	return out;
}
