#include "Cetvorosed.h"

Cetvorosed::Cetvorosed()
	:Korpa() {
}

Cetvorosed::Cetvorosed(float maxKilaza)
	:Korpa(maxKilaza,4){
}

void Cetvorosed::print(std::ostream& out) {
	Korpa::print(out);
	out <<"Ova korpa ima opterecenje: " << Korpa::getMaksimalnaMasaKorpe() << std::endl;
}

