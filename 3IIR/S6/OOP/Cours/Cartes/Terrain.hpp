#include<iostream>
#include<string>
#include"Carte.hpp"

using namespace std;


class Terrain : public Carte
{
public:
    string couleur;
    Terrain(string pCouleur);
    ~Terrain();
};
