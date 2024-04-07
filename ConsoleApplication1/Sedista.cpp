#include "Sedista.h"

Sedista::Sedista() {
	nizKorpi = nullptr;
}

Sedista::Sedista(int n, Korpa& k) {
	zauzmi(n, k);
}

Sedista::~Sedista() {
	delete[] nizKorpi;
	nizKorpi = nullptr;
}

void Sedista::sit(Skijas& s) {
	if (popunjenaMesta < slobodnaMesta)
		nizKorpi[popunjenaMesta++]->sit(s);
}

void Sedista::print(std::ostream& out) {
	out << broj << std::endl;
	out << *nizKorpi[0] << std::endl;
}

void Sedista::zauzmi(int n, Korpa& k) {
	broj = n;
	nizKorpi = new Korpa * [n];
	for (int i = 0; i < n; i++) {
		nizKorpi[i] = new Korpa(k);
	}
}

std::ostream& operator<<(std::ostream& out, Sedista& s) {
	s.print(out);
	return out;
}
