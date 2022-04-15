#include<iostream>
#include<string>

using namespace std;

//abstract class employe with attributes nom prenom date_entree and virtual function get_salaire
class employe{
    protected:
        string nom;
        string prenom;
        string date_entree;
    public:
        employe(string n,string p,string d){
            nom=n;
            prenom=p;
            date_entree=d;
        }
        string get_nom(){
            return nom;
        }
        string get_prenom(){
            return prenom;
        }
        string get_date_entree(){
            return date_entree;
        }
        //virtual method that returns the salary of the employee
        virtual double get_salaire()=0;
        //destructor
        virtual ~employe(){}
};

//subclass vente with attributes chiffre_daffaires and method get_salaire
class vente:public employe{
    protected:
        double chiffre_daffaires;
    public:
        vente(string n,string p,string d,double c):employe(n,p,d){
            chiffre_daffaires=c;
        }
        double get_salaire(){
            return 4000+chiffre_daffaires*0.20;
        }
       virtual ~vente(){
            cout<<"Destructeur de vente"<<endl;
        }
};
//subclass repr with attributes chiffre_daffaires and method get_salaire
class repr:public employe{
    protected:
        double chiffre_daffaires;
    public:
        repr(string n,string p,string d,double c):employe(n,p,d){
            chiffre_daffaires=c;
        }
        double get_salaire(){
            return 8000+chiffre_daffaires*0.10;
        }
        virtual ~repr(){
            cout<<"Destructeur de repr"<<endl;
        }
};

// subclass prod inherists from employe with attributes nb_unites and method get_salaire 
class prod:public employe{
    protected:
        int nb_unites;
    public:
        prod(string n,string p,string d,int nb):employe(n,p,d){
            nb_unites=nb;
        }
        double get_salaire(){
            return nb_unites*10;
        }
        ~prod(){
            cout<<"Destructeur de prod"<<endl;
        }
};

//subclass manutention inherits from employe with attributes nb_heures and method get_salaire
class manutention:public employe{
    protected:
        int nb_heures;
    public:
        manutention(string n,string p,string d,int nb):employe(n,p,d){
            nb_heures=nb;
        }
        double get_salaire(){
            return nb_heures*20;
        }
        ~manutention(){
            cout<<"Destructeur de manutention"<<endl;
        }
};

// class employe_risque with attribute prime_mensuelle and virtual get employe::get_salaire()
class employe_risque{
    protected:
        double prime_mensuelle;
    public:
        employe_risque(double prime){
            prime_mensuelle=1500;
        }
     
        ~employe_risque(){
            cout<<"Destructeur de employe_risque"<<endl;
        }
};

//subclass prod_risque that inherits from both (employe_risque and employe) with attributes nb_unites and method get_salaire

class prod_risque:public employe_risque,public prod{
    public:
        prod_risque(string n,string p,string d,int nb, double prime):employe_risque(prime),prod(n,p,d,nb){};
        double get_salaire(){
            return prod::get_salaire()+prime_mensuelle;
        }
        ~prod_risque(){
            cout<<"Destructeur de prod_risque"<<endl;
        }
};

//subclass manutention_risque that inherits from both (employe_risque and employe) with attributes nb_heures and method get_salaire

class manutention_risque:public employe_risque,public manutention{
    public:
        manutention_risque(string n,string p,string d,int nb,double prime):employe_risque(prime),manutention(n,p,d,nb){};
        double get_salaire(){
            return manutention::get_salaire()+prime_mensuelle;
        };
        ~manutention_risque(){
            cout<<"Destructeur de manutention_risque"<<endl;
        };
};

// main function that tests each class
int main(){
    employe *e1=new vente("vente","e1","01/01/2019",100);
    cout<<"nom: "<<e1->get_nom()<<endl;
    cout<<"prenom: "<<e1->get_prenom()<<endl;
    cout<<"date d'entree: "<<e1->get_date_entree()<<endl;
    cout<<"salaire: "<<e1->get_salaire()<<endl;
    cout<<endl;
    employe *e2=new repr("repr","e2","02/01/2019",200);
    cout<<"nom: "<<e2->get_nom()<<endl;
    cout<<"prenom: "<<e2->get_prenom()<<endl;
    cout<<"date d'entree: "<<e2->get_date_entree()<<endl;
    cout<<"salaire: "<<e2->get_salaire()<<endl;
    cout<<endl;
    employe *e3=new prod("prod","e3","03/01/2019",300);
    cout<<"nom: "<<e3->get_nom()<<endl;
    cout<<"prenom: "<<e3->get_prenom()<<endl;
    cout<<"date d'entree: "<<e3->get_date_entree()<<endl;
    cout<<"salaire: "<<e3->get_salaire()<<endl;
    cout<<endl;
    employe *e4=new manutention("man","e4","04/01/2019",400);
    cout<<"nom: "<<e4->get_nom()<<endl;
    cout<<"prenom: "<<e4->get_prenom()<<endl;
    cout<<"date d'entree: "<<e4->get_date_entree()<<endl;
    cout<<"salaire: "<<e4->get_salaire();
    cout<<endl;
    prod_risque *e5=new prod_risque("prod_risque","e5","05/01/2019",500,1000);
    cout<<"nom: "<<e5->get_nom()<<endl;
    cout<<"prenom: "<<e5->get_prenom()<<endl;
    cout<<"date d'entree: "<<e5->get_date_entree()<<endl;
    cout<<"salaire: "<<e5->get_salaire()<<endl;
    cout<<endl;
    manutention_risque *e6=new manutention_risque("manutention_risque","e6","06/01/2019",600,1000);
    cout<<"nom: "<<e6->get_nom()<<endl;
    cout<<"prenom: "<<e6->get_prenom()<<endl;
    cout<<"date d'entree: "<<e6->get_date_entree()<<endl;
    cout<<"salaire: "<<e6->get_salaire()<<endl;
    cout<<endl;

    return 0;
}