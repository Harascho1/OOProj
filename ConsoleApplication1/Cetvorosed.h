#pragma once
#include "Korpa.h"

class Cetvorosed : public Korpa{
	
public:
	float trenutnaTezina();
	inline int getBroj() { return 4; }
	Cetvorosed();
	Cetvorosed(float maxKilaza);
private:
	
};

