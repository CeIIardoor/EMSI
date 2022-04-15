class Client
{
private:
    string CIN;
    string nom;
    string num;
    string tel;
public:
    Client(string pCIN,string pNom,string pNum, string pTel);
    string getCIN();
    string getNom();
    string getNum();
    string getTel();
    void setCIN(string pNom);
    void setNom(string pNom);
    void setNum(string pNum);
    void setTel(string pNum);
    void Afficher();
};

