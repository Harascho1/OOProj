#pragma once
#include "Korpa.h"
class Dvosed : public Korpa{
public:
	Dvosed();
	Dvosed(float maxKilaza);
	inline int getBroj() { return 2; }
	float trenutnaTezina();
};

