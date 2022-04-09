#include<iostream>
#include<string>
#include "Document.hpp"

using namespace std;

class Dictionnaire : public Document
{
public:
    string langue;
    int nbrTomes;
    Dictionnaire(string pLangue, int pNbrTomes, Document &d);
};
