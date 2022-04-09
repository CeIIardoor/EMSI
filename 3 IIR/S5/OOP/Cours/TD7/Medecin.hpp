class Medecin
{
private:
    int id;
    string nom;
    string prenom;
    string email;
    string tel;
    string specialite;
public:
    static int c;
    Medecin(string pPrenom,string pNom,string pEmail, string pTel, string pSpecialite);
    string getPrenom();
    string getNom();
    string getEmail();
    string getTel();
    string getSpecialite();
    void setPrenom(string pNom);
    void setNom(string pNom);
    void setEmail(string pNum);
    void setTel(string pNum);
    void setSpecialite(string pNum);
    void Afficher();
};


