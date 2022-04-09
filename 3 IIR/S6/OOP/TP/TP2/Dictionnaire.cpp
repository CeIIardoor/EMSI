#include"Dictionnaire.hpp"
#include "Document.hpp"

Dictionnaire::Dictionnaire(string pLangue, int pNbrTomes, Document &d) : Document(d)
{
    langue = pLangue;
    nbrTomes = pNbrTomes;
    code = d.code;
    d.code++;
    titre = d.titre;
    prix = d.prix;
}

