#include "Dvosed.h"

Dvosed::Dvosed()
	: Korpa(){
}

Dvosed::Dvosed(float maxKilaza) 
	: Korpa(maxKilaza,2){
}

//float Dvosed::trenutnaTezina() {
//	float suma = 0;
//	for (int i = 0; i < 2; i++) {
//		if (nizKorpi[i]) {
//			suma += nizKorpi[i]->getMaksimalnaMasaKorpe();
//		}
//	}
//	return suma;
//}
