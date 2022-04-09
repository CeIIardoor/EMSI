#include<iostream>
#include<string>

using namespace std;

class Livre: public Document
{
public:
    string auteur;
    int nbrPages;
    Livre();
    Livre(string pAuteur, int pNbrPages, Document &d);
    Livre(Livre &l);
    void afficher();
};
