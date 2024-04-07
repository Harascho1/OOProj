#include "SkiLift.h"
#include <fstream>

SkiLift::SkiLift() {
	nazivSkiLifta = nullptr;
	n = brojPrikljucka = 0;
	nizPrikljucka = nullptr;
	tipPrikljucka = nullptr;
}

SkiLift::SkiLift(const char* nazivSkiLifta, int ukupanKapacitetZice) {
	this->nazivSkiLifta = new char[strlen(nazivSkiLifta) + 1];
	strcpy(this->nazivSkiLifta, nazivSkiLifta);
	nizPrikljucka = nullptr;
	zauzmi(ukupanKapacitetZice);
}



SkiLift::SkiLift(const SkiLift& sl) {
	this->nazivSkiLifta = new char[strlen(sl.nazivSkiLifta) + 1];
	strcpy(this->nazivSkiLifta, sl.nazivSkiLifta);
	nizPrikljucka = nullptr;
	zauzmi(sl.n);
}

SkiLift::~SkiLift() {
	oslobodi();
}

void SkiLift::add(Korpa* p) {
	if (brojPrikljucka < n)
		if (brojPrikljucka != 0) {
			if(typeid(*p) == typeid(*nizPrikljucka[0]))
				nizPrikljucka[brojPrikljucka++] = p;
		}
		else
			nizPrikljucka[brojPrikljucka++] = p;
}

void SkiLift::pop() {
	nizPrikljucka[brojPrikljucka - 1] = nullptr;
	brojPrikljucka--;
}

float SkiLift::TezinaSvihSedista() {
	float suma = 0.0f;
	for (int i = 0; i < brojPrikljucka; i++) {
		suma += nizPrikljucka[i]->getMaksimalnaMasaKorpe();
	}return suma;
}

void SkiLift::sacuvajStanje(const char* imeFajla) {
	std::ofstream fajl(imeFajla);
	fajl << *this;
}

void SkiLift::zauzmi(int n) {
	this->n = n;
	nizPrikljucka = new Korpa*[n];
	for (int i = 0; i < n; i++) {
		nizPrikljucka[i] = nullptr;
	}
	brojPrikljucka = 0;
}

void SkiLift::oslobodi() {
	if (nazivSkiLifta != nullptr) {
		delete nazivSkiLifta;
	}
	if (nizPrikljucka != nullptr) {
		delete[] nizPrikljucka;
		nizPrikljucka = nullptr;
	}
}

std::ostream& operator<<(std::ostream& out, SkiLift& s) {
		out << s.nazivSkiLifta << std::endl;
		for (int i = 0; i < s.brojPrikljucka; i++) {
			out << *s.nizPrikljucka[i];
		}return out;
}
