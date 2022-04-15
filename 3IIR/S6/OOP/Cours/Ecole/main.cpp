#include <iostream>
#include <string>
using namespace std;

//abstract class fonctionnaire with attributes (matricule, poste, date_entree, salaire) and methods (get_salaire, show_info)

class fonctionnaire{
    protected:
        string matricule;
        string poste;
        string date_entree;
        double salaire;
    public:
        fonctionnaire(){
            matricule="ERREUR";
            poste="ERREUR";
            date_entree="ERREUR";
            salaire=-1;
        }
        fonctionnaire(string m,string p,string d,double s){
            matricule=m;
            poste=p;
            date_entree=d;
            salaire=s;
        }
        virtual double get_salaire() =0;
        string get_matricule(){
            return matricule;
        }
        string get_poste(){
            return poste;
        }
        string get_date_entree(){
            return date_entree;
        }
        virtual void show_info(){
            cout<<"Matricule: "<<matricule<<endl;
            cout<<"Poste: "<<poste<<endl;
            cout<<"Date d'entree: "<<date_entree<<endl;
            cout<<"Salaire: "<<salaire<<endl;
        }
        virtual ~fonctionnaire(){}
};


// class professeur inherits fonctionnaire with attribute specialite 
class professeur:virtual public fonctionnaire{
    protected:
        string specialite;
    public:
        professeur(string m,string p,string d,double s,string sp):fonctionnaire(m,p,d,s){
            specialite=sp;
        }
        double get_salaire(){
            return salaire;
        }
        void show_info(){
            fonctionnaire::show_info();
            cout<<"Specialite: "<<specialite<<endl;
        }
        virtual ~professeur(){}
};

// class responsable inherits fonctionnaire with attribute responsabilite

class responsable:virtual public fonctionnaire{
    protected:
        string responsabilite;
    public:
        responsable(string m,string p,string d,double s,string r):fonctionnaire(m,p,d,s){
            responsabilite=r;
        }
        double get_salaire(){
            return salaire;
        }
        void show_info(){
            fonctionnaire::show_info();
            cout<<"Responsabilite: "<<responsabilite<<endl;
        }
        virtual ~responsable(){}
};

// class professeur_responsable inherits professeur and responsable with attribute date_affectation, prime_responsabilite
class professeur_responsable:public professeur,public responsable{
    protected:
        string date_affectation;
        double prime_responsabilite;
    public:
        professeur_responsable(string m,string p,string d,double s,string sp,string r,string da,double pr):
        professeur(m,p,d,s,sp),
        responsable(m,p,d,s,r){
            matricule=m;
            poste=p;
            date_entree=d;
            salaire=s;
            specialite=sp;
            responsabilite=r;
            date_affectation=da;
            prime_responsabilite=pr;
        }
        double get_salaire(){
            return salaire+prime_responsabilite;
        }
        void show_info(){
            fonctionnaire::show_info();
            cout<<"Specialite: "<<specialite<<endl;
            cout<<"Responsabilite: "<<responsabilite<<endl;
            cout<<"Date d'affectation: "<<date_affectation<<endl;
            cout<<"Prime responsabilite: "<<prime_responsabilite<<endl;
        }
        virtual ~professeur_responsable(){}
};

// main that tests everything
int main(){
    fonctionnaire *f1=new professeur("12345","professeur","01/01/2019",1000,"math");
    f1->show_info();
    cout<<"Salaire: "<<f1->get_salaire()<<endl;
    cout<<endl;
    fonctionnaire *f2=new responsable("12345","responsable","01/01/2019",1000,"secretaire");
    f2->show_info();
    cout<<"Salaire: "<<f2->get_salaire()<<endl;
    cout<<endl;
    fonctionnaire *f3=new professeur_responsable("12345","professeur_responsable","01/01/2019",1000,"math","secretaire","01/01/2019",1000);
    f3->show_info();
    cout<<"Salaire: "<<f3->get_salaire()<<endl;
    cout<<endl;
    delete f1;
    delete f2;
    delete f3;
    return 0;

}
