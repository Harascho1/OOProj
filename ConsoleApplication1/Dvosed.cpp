#include "Dvosed.h"

Dvosed::Dvosed()
	: Sedista(){
}

Dvosed::Dvosed(Korpa& k) 
	: Sedista(2,k){
}

float Dvosed::trenutnaTezina() {
	float suma = 0;
	for (int i = 0; i < 2; i++) {
		if (nizKorpi[i]) {
			suma += nizKorpi[i]->getMaksimalnaMasaKorpe();
		}
	}
	return suma;
}
