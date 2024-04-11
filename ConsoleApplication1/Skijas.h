#pragma once

#include <iostream>
class Skijas {
public:
	Skijas();
	Skijas(int idSkijasa, float tezinaSkijasa);
	Skijas(const Skijas& s);
	~Skijas();
	inline float getTezinaSkijasa() { return tezinaSkijasa; }

	Skijas& operator=(const Skijas& s);

	friend std::ostream& operator<<(std::ostream& out,Skijas& s);
private:
	int idSkijasa;
	float tezinaSkijasa;
};

