#include "Pasazer.h"

Pasazer::Pasazer(string i, string n, TypUlgi u) {
    imie = i;
    nazwisko = n;
    ulga = u;
}

string Pasazer::pobierzImie() const { return imie; }
string Pasazer::pobierzNazwisko() const { return nazwisko; }
TypUlgi Pasazer::pobierzUlge() const { return ulga; }

double Pasazer::pobierzMnoznikCeny() const {
    if (ulga == STUDENT) return 0.49;
    else if (ulga == SENIOR) return 0.70;
    else return 1.0;
}

ostream& operator<<(ostream& os, const Pasazer& p) {
    os << p.imie << " " << p.nazwisko;
    if (p.ulga == STUDENT) os << " [ULGA -51%]";
    else if (p.ulga == SENIOR) os << " [ULGA -30%]";
    return os;
}