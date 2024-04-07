#pragma once
#include "Korpa.h"
#include "Sedista.h"
class Dvosed : public Sedista{
public:
	Dvosed();
	Dvosed(Korpa& k);
	inline int getBroj() { return 2; }
	float trenutnaTezina();
};

