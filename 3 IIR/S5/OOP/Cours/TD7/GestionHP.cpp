#include"Rendezvous.cpp"
#include"Patient.cpp"
#include"Medecin.cpp"
#include<iostream>
#include<vector>
using namespace std;

int main(){
    Medecin m1("Yassine","Laouina","YassineLaouina@gmail.com","0661646562","Chirurgien");
    Medecin m2("aya","bellaly","ayabellaly@gmail.com","0661646562","Chirurgien");
    Patient p1("Ghita","bellaly","ghitabellaly@gmail.com","0662616465",m1);
    Patient p2("Halima","bellaly","Halimabellaly@gmail.com","0662616465",m1);
    Patient p3("Fakhita","bellaly","Fakhitabellaly@gmail.com","0662616465",m1);

    Rendezvous r1("20/11/2010","20:00","11",p1,m1);

    vector<Patient> patients;
    patients.push_back(p1);
    patients.push_back(p2);
    patients.push_back(p3);
    for(Patient *p = patients.begin(); *p != patients.end(); *p++) {
        cout << p->getNom() << endl;
    }

    p2->setNom("Ahmad");
    p3->setMedecin(m2);


    

}

