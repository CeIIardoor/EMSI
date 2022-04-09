#include<iostream>

using namespace std;

class Matchfoot
{
public:
    string equipeA;
    string equipeB;
    int butsA;
    int butsB;
    Matchfoot();
    Matchfoot(const Matchfoot &M);
    Matchfoot(string eA, string eB);
    void affichMatch();
    void marquerBut(string equ);
    int compareResultat();
};

