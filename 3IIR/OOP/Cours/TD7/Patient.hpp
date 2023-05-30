class Patient
{
private:
    int id;
    string prenom;
    string nom;
    string email;
    string tel;
    Medecin medecin;
public:
static int c;
    Patient(string pPrenom, string pNom, string pEmail, string pTel ,Medecin medecin);
    string getPrenom();
    string getNom();
    string getEmail();
    string getTel();
    Medecin getMedecin();

    void setPrenom(string pPrenom);
    void setNom(string pNom);
    void setEmail(string pEmail);
    void setTel(string pNum);
    void setMedecin(Medecin pMedecin);
    void Afficher();
};


