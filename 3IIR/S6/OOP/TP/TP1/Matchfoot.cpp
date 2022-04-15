#include"Matchfoot.hpp"

using namespace std;


Matchfoot::Matchfoot(){
    equipeA = "VideA";
    equipeB = "VideB";
    butsA = 0;
    butsB = 0;
}

Matchfoot::Matchfoot(const Matchfoot &M){
    equipeA = M.equipeA;
    equipeB = M.equipeB;
    butsA = M.butsA;
    butsB = M.butsB;
}

Matchfoot::Matchfoot(string eA, string eB){
    equipeA = eA;
    equipeB = eB;
    butsA = 0;
    butsB = 0;
}

void Matchfoot::affichMatch(){
    cout << "Match -> " << equipeA << ": " << butsA << "-" << butsB << " :" << equipeB << endl;
}
void Matchfoot::marquerBut(string equ){
    if(equ == equipeA) butsA++;
    if (equ == equipeB) butsB++;
}

int Matchfoot::compareResultat(){
    if (butsA > butsB) return 1;
    if (butsA < butsB) return -1;
    if (butsA == butsB) return 0;
}


