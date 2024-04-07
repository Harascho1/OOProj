#pragma once
#include "SkiLift.h"
class Skijaliste {

public:
	Skijaliste();
	Skijaliste(const char* nazivSkijalista);
	~Skijaliste();

	void add(SkiLift* Sl);

	friend std::ostream& operator<<(std::ostream& out, Skijaliste& s);

private:
	char* nazivSkijalista;
	SkiLift** nizSkiLiftova;
	int brojSkiLiftova;
	int n;
	void zauzmi();
	void oslobodi();


	

};

