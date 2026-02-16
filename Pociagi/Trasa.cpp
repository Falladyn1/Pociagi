#include "Trasa.h"
#include "Wyjatki.h"
#include <iostream>

using namespace std;

Trasa::Trasa(string nazwa) {
    nazwaRelacji = nazwa;
}

void Trasa::dodajStacje(string nazwaStacji) {
    stacje.push_back(nazwaStacji);
}

void Trasa::wyswietlPrzebieg() const {
    cout << "RELACJA: " << nazwaRelacji << endl;
    ustawKolor(KOLOR_NIEBIESKI);

    for (int i = 0; i < stacje.size(); i++) {
        cout << "[ " << stacje[i] << " ]";
        if (i < stacje.size() - 1) {
            cout << " ===> ";
        }
    }

    ustawKolor(KOLOR_RESET);
    cout << endl << endl;
}

const vector<string>& Trasa::pobierzStacje() const {
    return stacje;
}