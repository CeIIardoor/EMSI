#include"Livre.hpp"

Livre::Livre(){
    titre = "";
    prix = 0;
    auteur = "";
    nbrPages = 0;
}

Livre::Livre(string pAuteur, int pNbrPages, Document &d) : Document(d)
{
    auteur = pAuteur;
    nbrPages = pNbrPages;
    code = d.c;
    d.c++;
    titre = d.titre;
    prix = d.prix;
}

Livre::Livre(Livre &l) : Document(l)
{
    auteur = l.auteur;
    nbrPages = l.nbrPages;
    code = l.code;
    titre = l.titre;
    prix = l.prix;
}

void Livre::afficher(){
    cout << "Livre : " << titre << " " << auteur << " " << nbrPages << " " << prix << endl;
}