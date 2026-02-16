#pragma once
#include <string>
#include <iostream>

using namespace std;

enum TypUlgi { NORMALNY, STUDENT, SENIOR };

class Pasazer {
private:
    string imie;
    string nazwisko;
    TypUlgi ulga;

public:
    Pasazer(string i, string n, TypUlgi u);

    string pobierzImie() const;
    string pobierzNazwisko() const;
    TypUlgi pobierzUlge() const;
    double pobierzMnoznikCeny() const;

    friend ostream& operator<<(ostream& os, const Pasazer& p);
};