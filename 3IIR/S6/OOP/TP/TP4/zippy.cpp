// create abstract class client with attributes nom cin montant_total_total constructor and virtual getmontant_total()

#include <iostream>
#include <string>

using namespace std;

class Client
{
protected:
    string nom;
    int cin;
    float montant_total;
public:
    Client(string nom, int cin, float montant_total){
        this->nom = nom;
        this->cin = cin;
        this->montant_total = montant_total;
    };
    virtual float getmontant() = 0;

    string getnom(){
        return nom;
    };
    int getcin(){
        return cin;
    };
    void setnom(string nom){
        this->nom = nom;
    };
    void setcin(int cin){
        this->cin = cin;
    };
    void afficher(){
        cout << "nom : " << nom << endl;
        cout << "cin : " << cin << endl;
        cout << "montant total : " << montant_total << endl;
    };
    virtual ~Client(){
        cout << "destructeur client " << cin << endl;
    };
};


class ClientComptant : public Client
{
public:
    ClientComptant(string nom, int cin, float montant_total) : Client(nom, cin, montant_total){};
    float getmontant(){
        return montant_total;
    };
    ~ClientComptant(){};
};


class ClientCredit : public Client
{
protected:
    float mensualite;
    float derniere_mensualite;
    int mensualites_restante;
public:
    ClientCredit(string nom, int cin, float montant_total, float mensualite, float derniere_mensualite, int mensualites_restante) : Client(nom, cin, montant_total){
        this->mensualite = mensualite;
        this->derniere_mensualite = derniere_mensualite;
        this->mensualites_restante = mensualites_restante;
    };
    float getmontant(){
        return montant_total - mensualite * mensualites_restante;
    };
    void payer_mensualite(){
        mensualites_restante--;
    };
    ~ClientCredit(){};
};

// Class societe avec attributs nom et liste de clients du mois le nombre de clients et une fonction calcul_montant_total_encaisse()

class Societe
{
protected:
    string nom;
    Client* liste_clients[100];
    int nombre_clients;
public:
    Societe(string nom){
        this->nom = nom;
        nombre_clients = 0;
    };
    void ajouter_client(Client* client){
        liste_clients[nombre_clients] = client;
        nombre_clients++;
    };
    void afficher_clients(){
        for(int i = 0; i < nombre_clients; i++){
            liste_clients[i]->afficher();
        }
    };
    float calcul_montant_total_encaisse(){
        float montant_total = 0;
        for(int i = 0; i < nombre_clients; i++){
            montant_total += liste_clients[i]->getmontant();
        }
        return montant_total;
    };
    //surcharge += pour ajouter un client

    void operator+=(Client* client){
        ajouter_client(client);
    };

    Client* operator[](int i){
        return liste_clients[i];
    };

    ~Societe(){};
};

int main(){
    Societe societe("Zippy");
    ClientComptant* client_comptant = new ClientComptant("ClientComptant", 1, 10000);
    ClientComptant* client_comptant2 = new ClientComptant("ClientComptant", 2, 20000);
    ClientCredit* client_credit = new ClientCredit("ClientCredit", 3, 10000, 1000, 100, 10);
    ClientCredit* client_credit2 = new ClientCredit("ClientCredit", 4, 20000, 1000, 100, 5);
    
    societe += client_comptant;
    societe += client_comptant2;
    societe += client_credit;
    societe += client_credit2;
    societe.afficher_clients();

    societe[0]->afficher();
    societe[1]->afficher();
    cout << "montant total encaissé : " << societe.calcul_montant_total_encaisse() << endl;
    return 0;
}
