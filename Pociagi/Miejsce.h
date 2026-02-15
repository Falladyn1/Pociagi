#pragma once

enum class TypMiejsca { OKNO, SRODEK, KORYTARZ };

class Miejsce {
private:
    int numerMiejsca;
    TypMiejsca rodzaj;
    bool status;

public:
    Miejsce(int nr, TypMiejsca r);

    bool sprawdzDostepnosc() const;
    void zarezerwuj();
    void zwolnij();

    int getNumer() const;
    TypMiejsca getRodzaj() const;
};