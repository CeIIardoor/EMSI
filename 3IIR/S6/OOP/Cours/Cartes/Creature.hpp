#include<iostream>
#include<string>
#include"Carte.hpp"

using namespace std;


class Creature : public Carte
{
public:
    string nom;
    int degats;
    int pv;
    Creature(string pNom, int pDegats, int pPv);
    ~Creature();
};

