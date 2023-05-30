class Rendezvous
{
private:
    string num;
    string date;
    string heure;
    Patient patient;
    Medecin medecin;
public:
    Rendezvous(string pDate,string pHeure,string pNum, Patient pPatient, Medecin pMedecin);
    string getDate();
    string getHeure();
    string getNum();
    Patient getPatient();
    Medecin getMedecin();
    
    void setdate(string pDate);
    void setHeure(string pHeure);
    void setNum(string pNum);
    void setPatient(Patient pPatient);
    void setMedecin(Medecin pMedecin);


    void Afficher();
};

