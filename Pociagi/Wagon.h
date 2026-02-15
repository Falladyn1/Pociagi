#pragma once
#include <vector>
#include "Miejsce.h"

class Wagon {
protected:
	int numerWagonu;
	std::vector<Miejsce> siedzenia;
public:
	Wagon(int nr) : numerWagonu(nr){}
	virtual ~Wagon() = default;

	virtual void wyswietlSchemat() const = 0;
};