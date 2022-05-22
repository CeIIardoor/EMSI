#include"iostream"
#include"string"

using namespace std;


//class Pilote with attributes : string nom, static int code.
//methods : afficher, getNom, setNom, getCode, setCode, getNbPilotes.
class Pilote
{
    private:
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
            cout << "Vehicule : " << numero << " " << vitesse << " " << carburant << " " << estDemarre << " " << pilote.getCode() << " " << pilote.getNom() << endl;
        };
        void addCarburant(int c){
            carburant += c;
        };
        void faireLePlein();
};
//class Voiture inherits from Vehicule with attributes : int capaciteReservoir = 80, const NB_routes = 4.
//methods : faireLePlein, addCarburant, afficher.
class Voiture : public Vehicule
{
    private:
        int capaciteReservoir;
        const int NB_routes = 4;
    public:
        Voiture() : Vehicule(){
            capaciteReservoir = 80;
        };
        Voiture(int numero, int carburant, bool estDemarre, Pilote pilote, int vitesse, int capaciteReservoir) : Vehicule(numero, carburant, estDemarre, pilote, vitesse){
            this->capaciteReservoir = capaciteReservoir;
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
            cout << "Voiture : " << numero << " " << vitesse << " " << carburant << " " << estDemarre << " " << pilote.getCode() << " " << pilote.getNom() << endl;
        };
        void demarrerVoiture(){
            if(estDemarre){
                cout << "La voiture est deja demarre" << endl;
            }else{
                demarrer();
            }
        };
};
//class Moto inherits from Vehicule with attributes : int capaciteReservoir = 30, const NB_routes = 2.
//methods : faireLePlein, addCarburant, afficher.
class Moto : public Vehicule
{
    private:
        int capaciteReservoir;
        const int NB_routes = 2;
    public:
        Moto() : Vehicule(){
            capaciteReservoir = 30;
        };
        Moto(int numero, int carburant, bool estDemarre, Pilote pilote, int vitesse, int capaciteReservoir) : Vehicule(numero, carburant, estDemarre, pilote, vitesse){
            this->capaciteReservoir = capaciteReservoir;
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
            cout << "Moto : " << numero << " " << vitesse << " " << carburant << " " << estDemarre << " " << pilote.getCode() << " " << pilote.getNom() << endl;
        };
};
//class Course with attributes : table lesVehicules, addVehicule(Vehicule v), getVehicule(int num), demarrerTous(),demarrerVoitures(),afficherTotalCarburant().
class Course
{
    private:
        Vehicule *lesVehicules;
        int nbVehicules;
        int totalCarburant;
    public:
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
            lesVehicules[nbVehicules] = v;
            nbVehicules++;
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
                if(lesVehicules[i].getNumero() < 10){
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
};

int main()
{
    Pilote p1("Dupont");
    Pilote p2("Durand");
    Course c1(10);
    Voiture v1;

    p1.afficher();
    p2.afficher();

    v1.addCarburant(10);
    v1.setPilote(p1);

    v1.afficher();
    v1.accelerer();
    v1.afficher();

    Moto m1;
    m1.addCarburant(10);
    m1.setPilote(p2);

    m1.afficher();
    m1.accelerer();
    m1.afficher();

    c1.addVehicule(v1);
    c1.addVehicule(m1);

    c1.afficherTotalCarburant();

    c1.demarrerTous();

    return 0;
}