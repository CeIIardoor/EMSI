#include<iostream>


 class Client :public SocieteTransport{
 	public:
    Client();
    Client(string cin, string nom, string tel);


   void ajouterCargaison(int indice, Cargaison carg);
   void afficherCargaison(int reference);
   void afficherMarchandise(int numero);
   void afficherToutesMarchandises(int reference);
   void afficherToutesCargaisons();
   float ConsulterPoidsCarg(int ref);
   float ConsulterCoutCarg(int ref);
   void trierCargaison();

 };
