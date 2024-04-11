#pragma once
#include "SkiLift.h"
class Skijaliste {

public:
	Skijaliste(const Skijaliste& s) = delete;
	
	~Skijaliste();
	static Skijaliste* getInstance(const char* nazivSkijalista);
	void add(SkiLift* Sl);

	friend std::ostream& operator<<(std::ostream& out, Skijaliste& s);

private:
	char* nazivSkijalista;
	SkiLift** nizSkiLiftova;
	int brojSkiLiftova;
	int n;
	static Skijaliste* skijaliste;
	Skijaliste();
	Skijaliste(const char* nazivSkijalista);
	void zauzmi();
	void oslobodi();
};

