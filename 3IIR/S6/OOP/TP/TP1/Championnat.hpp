#include<iostream>
#include <string>
#include <unordered_map>
#include"Matchfoot.cpp"

using namespace std;

class Championnat
{
public:
    unordered_map<int, Matchfoot> tabMatchs;
    unordered_map<string, int> tabEqPts;
    Championnat();
    void AjouterMatch(int i, Matchfoot ml);
    void listeEquipes();
    int pointParEquipe(string eq);
    void calculPts();
    void afficher();
};