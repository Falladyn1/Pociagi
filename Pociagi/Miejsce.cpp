#include "Miejsce.h"

Miejsce::Miejsce(int nr, TypMiejsca r)
    : numerMiejsca(nr), rodzaj(r), status(false) {
}

bool Miejsce::sprawdzDostepnosc() const {
    return !status;
}

void Miejsce::zarezerwuj() {
    if (!status) {
        status = true;
    }
}

void Miejsce::zwolnij() {
    status = false;
}

int Miejsce::getNumer() const {
    return status;
}

TypMiejsca Miejsce::getRodzaj() const {
    return rodzaj;
}