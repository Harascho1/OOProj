#include "Skijaliste.h"

Skijaliste::Skijaliste() {
	this->n = this->brojSkiLiftova = 0;
	nazivSkijalista = nullptr;
	nizSkiLiftova = nullptr;
}

Skijaliste::Skijaliste(const char* nazivSkijalista) {
	this->nazivSkijalista = new char[strlen(nazivSkijalista)+1];
	strcpy(this->nazivSkijalista, nazivSkijalista);
	zauzmi();
}

Skijaliste::~Skijaliste() {
	oslobodi();
}

void Skijaliste::add(SkiLift* Sl) {
	if (brojSkiLiftova < n)
		nizSkiLiftova[brojSkiLiftova++] = Sl;
}

void Skijaliste::zauzmi() {
	this->n = 2;
	nizSkiLiftova = new SkiLift*[2];
	for (int i = 0; i < n; i++) {
		nizSkiLiftova[i] = nullptr;
	}
}

void Skijaliste::oslobodi() {
	if (nizSkiLiftova != nullptr) {
		for (int i = 0; i < n; i++) {
			if (nizSkiLiftova[i] != nullptr) {
				delete nizSkiLiftova[i];
				nizSkiLiftova[i] = nullptr;
			}
		}
		delete[] nizSkiLiftova;
	}

	if (nazivSkijalista != nullptr)
		delete nazivSkijalista;

}

std::ostream& operator<<(std::ostream& out, Skijaliste& s) {
	out << s.nazivSkijalista << std::endl;
	for (int i = 0; i < s.brojSkiLiftova; i++) {
		if(s.nizSkiLiftova[i] != nullptr)
		out << *s.nizSkiLiftova[i] << std::endl;
	}
	return out;
}
