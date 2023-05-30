#include<iostream>
#include<string>
#include"Carte.hpp"

class Sortilege : public Carte
{
public:
 string nom;
 string expl;
 Sortilege(string sNom,string pExpl, int pCout);
~Sortilege();
};

Sortilege::Sortilege(string pNom,string pExpl,int pCout) : Carte(pCout)
{
    nom = pNom;
    expl = pExpl;
    cout = pCout;
}

Sortilege::~Sortilege()
{
}
