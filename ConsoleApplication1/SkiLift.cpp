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

void SkiLift::add(Sedista* p) {
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
	return 0.0f;
}

Sedista* SkiLift::NajveceOpterecenje() {
	int iMax = 0;
	for (int i = 1; i < brojPrikljucka; i++) {
		if (nizPrikljucka[i]->trenutnaTezina() > nizPrikljucka[iMax]->trenutnaTezina())
			iMax = i;
	}
	return nizPrikljucka[iMax];
}

void SkiLift::sacuvajStanje(const char* imeFajla) {
	std::ofstream fajl(imeFajla);
	fajl << *this;
}

void SkiLift::zauzmi(int n) {
	this->n = n;
	nizPrikljucka = new Sedista*[n];
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