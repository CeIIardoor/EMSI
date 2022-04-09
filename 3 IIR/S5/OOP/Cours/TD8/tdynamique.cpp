#include<iostream>
using namespace std;

class Ensemble {
    private:
    int *tab;
    int nmax;
    int nelts;

    public:
    Ensemble(int pNmax){
        this.nmax = pNmax;
        this.nelts = 0;
        this->tab = new int[pNmax];
    }

    void afficher(){
        for (int i = 0; i < nelts; i++)
        {
            cout << (*tab)+i << " | ";
        }
        
    }
    bool ajouter(int v){
        if (this.nelts<this.nmax)
        {
            this.nelts++;
            *tab+nelts = v;
            return true;
        }
        return false;
    }

    int taillemax(){
        return nmax;
    }
    int cardinal(){
        return nelts;
    }
    friend int somme(Ensemble e);
};

int somme(Ensemble e){
    int somme = 0;
    for (int i = 0; i < nelts; i++)
        {
            somme += *((*tab)+i);
        }
    return somme;
}

int main(){
    return 0;
}