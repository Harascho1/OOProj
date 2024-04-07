#include "Skijas.h"

Skijas::Skijas() {
	idSkijasa = tezinaSkijasa = 0;
}

Skijas::Skijas(int idSkijasa, float tezinaSkijasa) {
	this->idSkijasa = idSkijasa;
	this->tezinaSkijasa = tezinaSkijasa;
}

Skijas::Skijas(const Skijas& s) {
	this->idSkijasa = s.idSkijasa;
	this->tezinaSkijasa = s.tezinaSkijasa;
}

Skijas::~Skijas() {
	idSkijasa = tezinaSkijasa = 0;
}
