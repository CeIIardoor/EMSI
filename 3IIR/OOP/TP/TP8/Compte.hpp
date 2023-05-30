class Compte
{
public:
    int id;
    int code;
    float solde;
public:
    Compte();
    Compte(int pCode, float pSolde);
    ~Compte();
    void verser(float pSolde);
    void retirer(float pSolde);
    float getSolde();
};

