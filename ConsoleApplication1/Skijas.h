#pragma once
class Skijas {
public:
	Skijas();
	Skijas(int idSkijasa, float tezinaSkijasa);
	Skijas(const Skijas& s);
	~Skijas();
	inline float getTezinaSkijasa() { return tezinaSkijasa; }
private:
	int idSkijasa;
	float tezinaSkijasa;
};

