#pragma once
#include "Korpa.h"
#include "Sedista.h"

class Cetvorosed : public Sedista{
	
public:
	float trenutnaTezina();
	inline int getBroj() { return 4; }
	Cetvorosed();
	Cetvorosed(Korpa& k);
private:
	
};

