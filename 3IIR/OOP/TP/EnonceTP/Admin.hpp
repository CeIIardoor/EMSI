 #include<iostream>

 class Admin :public SocieteTransport{
 	public:
    Admin();
    Admin(string cin, string nom, string tel);
    // Methodes Client
    void afficherCargaison(int reference);
    void afficherMarchandise(int numero);
    void afficherToutesMarchandises(int reference);
    void afficherToutesCargaisons();
    float ConsulterPoidsCarg(int ref);
    float ConsulterCoutCarg(int ref);
    void trierCargaison();
    // + Methodes Admin 
    void ajouterCargaison(int indice, Cargaison carg);
    void ajouterMarchandiseCarg(int reference, int indice, Marchandise march);
    void supprimerMarchandise(Cargaison carg, int num);
    void supprimerCargaison(int reference);
    void modifierInfoMarchandise(int numero,float p, float v);
};
 