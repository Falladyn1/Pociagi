#pragma once

enum class TypMiejsca {OKNO, SRODEK, KORYTARZ};

class Miejsce
{
private:
	int numerMiejsca;
	TypMiejsca rodzaj;
public:
	Miejsce(int nr, TypMiejsca r);
};

