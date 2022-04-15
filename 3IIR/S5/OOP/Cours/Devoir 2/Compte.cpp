#include<iostream>
using namespace std;

static int cpt = 0;
class Compte{
    protected :
	int code;
	float solde;
	public :
    Compte(){
        this->code=++cpt;
		this->solde=0;
	}
	Compte(float solde){
		this->code=++cpt;
		this->solde=solde;
	}
    int getCode(){
        return this->code;
    }
    float getSolde(){
        return this->solde;
    }
    void depot(float d){
        this->solde += d;
    }
	void retrait(float r){
        this->solde -= r;
    }
    void toString(){
        cout << "Solde du compte " << code << " : " << solde << endl;
    }
    
    
    };

    class CompteEpargne :public Compte{
    protected:
    float interet = 6; 
 	public:
    CompteEpargne(){
        this->code=++cpt;
		this->solde=0;
	}
	CompteEpargne(float solde){
		this->code=++cpt;
		this->solde=solde;
	}
    void calculInteret(){
        this->solde *= 1+(interet/100);
    }
    };
    
    class ComptePayant :public Compte{
    protected:
    float frais = 5;
 	public:
    ComptePayant(){
        this->code=++cpt;
		this->solde=0;
	}
	ComptePayant(float solde){
		this->code=++cpt;
		this->solde=solde;
	}
    void depot(float d){
        this->solde -= frais;
        this->solde += d;
    }
	void retrait(float r){
        this->solde -= frais;
        this->solde -= r;
    }
    };

    main(){
        Compte c = Compte(123.1);
        CompteEpargne ce = CompteEpargne(1000);
        ComptePayant cp = ComptePayant(500);

        c.depot(100);
        c.toString();
        
        ce.calculInteret();
        ce.toString();

        cp.retrait(100);
        cp.depot(100);
        cp.toString();
        
    }
