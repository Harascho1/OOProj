#pragma once
#include "Korpa.h"

class Cetvorosed : public Korpa{
	
public:
	inline int getBroj() { return 4; }
	Cetvorosed();
	Cetvorosed(float maxKilaza);
	void print(std::ostream& out);
private:
	
};

