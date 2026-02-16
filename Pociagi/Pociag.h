#pragma once
#include <vector>
#include <string>
#include "Wagon.h"
#include "Trasa.h"

using namespace std;

class Pociag {
private:
    string nazwa;
    string godzinaOdjazdu;
    Trasa trasa;
    vector<Wagon*> wagony;

public:
    Pociag(string nazwa, string godzina, Trasa trasa);
    ~Pociag();

    void dodajWagon(Wagon* w);
    void zarezerwujMiejsce(int nrWagonu, int nrMiejsca);
    void anulujRezerwacje(int nrWagonu, int nrMiejsca);

    void wyswietlListePasazerow() const;
    void pokazPodgladPociagu() const;

    void zapiszStanDoPliku() const;
    void wczytajStanZPliku();

    string pobierzNazwe() const;
    string pobierzGodzine() const;
    Trasa& pobierzTrase() const;
};