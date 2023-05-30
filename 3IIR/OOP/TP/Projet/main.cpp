#include"iostream"
#include"string"

using namespace std;


//class Pilote with attributes : string nom, static int code.
//methods : afficher, getNom, setNom, getCode, setCode, getNbPilotes.
class Pilote
{
    protected:
        int code;
        string nom;
    public:
        static int idcode;
        Pilote(){
            idcode++;
            code = idcode;
            nom = "Pilote" + to_string(code);
        };
        Pilote(string nom){
            idcode++;
            this->nom = nom;
            code = idcode;
        };
        void afficher(){
            cout << "Pilote : " << code << " " << nom << endl;
        };
        string getNom(){
            return nom;
        };
        void setNom(string nom){
            this->nom = nom;
        };
        int getCode(){
            return this->code;
        };
        void setCode(int code){
            this->code = code;
        };
        static int getNbPilotes(){
            return idcode;
        };
};
int Pilote::idcode = 0;

//class Vehicule with attributes : int numero, int carburant, boolean estDemarre, Pilote pilote, int vitesse.
//methods : demarrer, accelerer, afficher, addCarburant(int c), faireLePlein.
class Vehicule
{
    protected:
        int numero;
        int carburant;
        bool estDemarre;
        Pilote pilote;
        int vitesse;
    public:
        Vehicule(){
            numero = 0;
            carburant = 0;
            estDemarre = false;
            vitesse = 0;
        };
        Vehicule(int numero, int carburant, bool estDemarre, Pilote pilote, int vitesse){
            this->numero = numero;
            this->carburant = carburant;
            this->estDemarre = estDemarre;
            this->pilote = pilote;
            this->vitesse = vitesse;
        };  
        int getNumero(){
            return numero;
        };
        int getCarburant(){
            return carburant;
        };
        void setPilote(Pilote pilote){
            this->pilote = pilote;
        };
        void demarrer(){
            estDemarre = true;
        };
        void accelerer(){
            if(estDemarre){
                if(carburant > 0){
                    vitesse += 1;
                    carburant -= 1;
                }
                else{
                    cout << "Il n'y a plus de carburant" << endl;
                }
            }else{
                cout << "Le vehicule n'est pas demarre" << endl;
            }
        };
        void afficher(){
            cout << "Vehicule : " << numero << " vitesse:  " << vitesse << " carb: " << carburant << " demarre: " << estDemarre << " p: " << pilote.getCode() << " " << pilote.getNom() << endl;
        };
        void addCarburant(int c);
        void faireLePlein();
        int getNB_roues();
};
//class Voiture inherits from Vehicule with attributes : int capaciteReservoir = 80, const NB_roues = 4.
//methods : faireLePlein, addCarburant, afficher.
class Voiture : public Vehicule
{
    protected:
        int capaciteReservoir;
        const int NB_roues = 4;
    public:
        Voiture() : Vehicule(){
            capaciteReservoir = 80;
        };
        Voiture(int numero, int carburant, bool estDemarre, Pilote pilote, int vitesse) : Vehicule(numero, carburant, estDemarre, pilote, vitesse){
            capaciteReservoir = 80;
        };
        void faireLePlein(){
            carburant = capaciteReservoir;
        };
        void addCarburant(int c){
            if (carburant < capaciteReservoir){
                if (c <= capaciteReservoir - carburant){
                    carburant += c;
                }
                else{
                    carburant = capaciteReservoir;
                    cout << "Le reservoir est débordé" << endl;
                }
            }
        };
        int getNbRoues(){
            return NB_roues;
        };
        void afficher(){
            cout << "Voiture : " << numero << " vitesse: " << vitesse << " carb: " << carburant << " demarre :" << estDemarre << " p: " << pilote.getCode() << " " << pilote.getNom() << endl;
        };
        void demarrerVoiture(){
            if(estDemarre){
                cout << "La voiture est deja demarre" << endl;
            }else{
                demarrer();
            }
        };
        
};
//class Moto inherits from Vehicule with attributes : int capaciteReservoir = 30, const NB_roues = 2.
//methods : faireLePlein, addCarburant, afficher.
class Moto : public Vehicule
{
    protected:
        int capaciteReservoir;
        const int NB_roues = 2;
    public:
        Moto() : Vehicule(){
            capaciteReservoir = 30;
        };
        Moto(int numero, int carburant, bool estDemarre, Pilote pilote, int vitesse) : Vehicule(numero, carburant, estDemarre, pilote, vitesse){
            capaciteReservoir = 30;
        };
        void faireLePlein(){
            carburant = capaciteReservoir;
        };
        void addCarburant(int c){
            if (carburant < capaciteReservoir){
                if (c <= capaciteReservoir - carburant){
                    carburant += c;
                }
                else{
                    carburant = capaciteReservoir;
                    cout << "Le reservoir est débordé" << endl;
                }
            }
        };
        void afficher(){
            cout << "Moto : " << numero << " vitesse: " << vitesse << " carb: " << carburant << " demarre:" << estDemarre  << " p: " << pilote.getCode() << " " << pilote.getNom() << endl;
        };
        int getNbRoues(){
            return NB_roues;
        };
};
//class Course with attributes : table lesVehicules, addVehicule(Vehicule v), getVehicule(int num), demarrerTous(),demarrerVoitures(),afficherTotalCarburant().
class Course
{
    protected:
        Vehicule *lesVehicules;
        int nbVehicules;
        int totalCarburant;
    public:
        static int cpt;
        Course(){
            lesVehicules = new Vehicule[10];
            nbVehicules = 0;
            totalCarburant = 0;
        };
        Course(int nbVehicules){
            lesVehicules = new Vehicule[nbVehicules];
            this->nbVehicules = nbVehicules;
            totalCarburant = 0;
        };
        void addVehicule(Vehicule v){
            lesVehicules[cpt] = v;
            cpt++;
        };

        Vehicule getVehicule(int num){
            for(int i = 0; i < nbVehicules; i++){
                if(lesVehicules[i].getNumero() == num){
                    return lesVehicules[i];
                }
            }
        };
        void demarrerTous(){
            for(int i = 0; i < nbVehicules; i++){
                lesVehicules[i].demarrer();
            }
        };
        void demarrerVoitures(){
            for(int i = 0; i < nbVehicules; i++){
                if(lesVehicules[i].getNB_roues() == 4){
                    lesVehicules[i].demarrer();
                }
            }
        };
        void afficherTotalCarburant(){
            for(int i = 0; i < nbVehicules; i++){
                totalCarburant += lesVehicules[i].getCarburant();
            }
            cout << "Total carburant : " << totalCarburant << endl;
        };
        void afficherTout(){
            for(int i = 0; i < nbVehicules; i++){
                lesVehicules[i].afficher();
            }
        };
};
int Course::cpt = 0;

int main()
{
    Pilote p1("Json Statham");
    Pilote p2("Moul Taxi");
    Pilote p3("Ilyass Chefor");
    Pilote p4("Kerroumi");
    Pilote p5("Lm9addem");
    Course c1(10);
    Voiture v1(1, 100, false, p1, 0);
    Voiture v2(2, 100, true, p2, 50);
    Voiture v3(3, 100, false, p3, 0);


    p1.afficher();
    p2.afficher();
    p3.afficher();

    v1.addCarburant(10);
    v1.setPilote(p1);
    v1.afficher();
    v2.afficher();
    v3.afficher();
    v1.demarrer();
    for(int i=0; i<30; i++){
        v1.accelerer();
    }
    v1.afficher();

    Moto m1(4, 100, false, p4, 0);
    m1.addCarburant(10);
    m1.setPilote(p4);
    m1.demarrer();
    m1.afficher();
    for(int i=0; i<30; i++){
        m1.accelerer();
    }
    m1.afficher();

    Moto m2(5, 100, false, p5, 0);
    m2.afficher();

    c1.addVehicule(v1);
    c1.addVehicule(v2);
    c1.addVehicule(v3);
    c1.addVehicule(m1);
    c1.addVehicule(m2);

    c1.afficherTotalCarburant();

    c1.demarrerTous();
    c1.afficherTout();

    return 0;
}