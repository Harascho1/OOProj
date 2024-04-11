#include "Dvosed.h"

Dvosed::Dvosed()
	: Korpa(){
}

Dvosed::Dvosed(float maxKilaza) 
	: Korpa(maxKilaza,2){
}

void Dvosed::print(std::ostream& out) {
	Korpa::print(out);
	for (int i = 0; i < popunjenaMesta; i++) {
		out << skijas[i] <<std::endl;
	}
}
