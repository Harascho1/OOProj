#include "Korpa.h"

Korpa::Korpa() {
	maksimalnaMasa = 0;
}

Korpa::Korpa(float maksimalnaMasa) {
	this->maksimalnaMasa = maksimalnaMasa;
}

Korpa::Korpa(const Korpa& k) {
	this->maksimalnaMasa = k.maksimalnaMasa;
}

void Korpa::sit(Skijas& s) {
	skijas = s;
}

Korpa::~Korpa() {
	maksimalnaMasa = 0;
}

std::ostream& operator<<(std::ostream& out, Korpa k) {
	out << "Svaka korpa je maksimalne tezinie: ";
	return out << k.maksimalnaMasa << std::endl;
}
