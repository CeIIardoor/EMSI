#include"Championnat.hpp"

using namespace std;

Championnat::Championnat(){
};

void Championnat::AjouterMatch(int i, Matchfoot ml){
    tabMatchs.insert({i,ml});
};


void Championnat::listeEquipes(){
    for(auto it:tabMatchs){
        if (tabEqPts.find(it.second.equipeA) == tabEqPts.end()) tabEqPts.insert({it.second.equipeA ,0});
        if (tabEqPts.find(it.second.equipeB) == tabEqPts.end()) tabEqPts.insert({it.second.equipeB ,0});
  }
};



int Championnat::pointParEquipe(string eq){
    int s = 0;
    for(auto it:tabMatchs){
        if (it.second.equipeA == eq){
            if (it.second.compareResultat() == 1) s += 3;
            if (it.second.compareResultat() == 0) s += 1;
        }
        if (it.second.equipeB == eq){
            if (it.second.compareResultat() == -1) s += 3;
            if (it.second.compareResultat() == 0) s += 1;
        }
    }
    return s;
};

void Championnat::calculPts(){
    for(auto it:tabMatchs){
    if (it.second.compareResultat() == 1) tabEqPts.at(it.second.equipeA) += 3;
    if (it.second.compareResultat() == -1) tabEqPts.at(it.second.equipeB) += 3;
    if (it.second.compareResultat() == 0) {
        tabEqPts.at(it.second.equipeA) += 1;
        tabEqPts.at(it.second.equipeB) += 1;
    }
  }
};

void Championnat::afficher(){
    for(const auto it : tabEqPts ) {
        cout << "Equipe : " << it.first << " Pts : " << it.second << endl;
    }
}

