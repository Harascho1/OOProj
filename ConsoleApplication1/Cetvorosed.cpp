#include "Cetvorosed.h"

float Cetvorosed::trenutnaTezina() {
	float suma = 0;
	for (int i = 0; i < 4; i++) {
		if (nizKorpi[i]) {
			suma += nizKorpi[i]->getOpterecenje();
		}
	}
	return suma;
	
}

Cetvorosed::Cetvorosed()
	:Korpa() {
}

Cetvorosed::Cetvorosed(float maxKilaza)
	:Korpa(maxKilaza,4){
}
