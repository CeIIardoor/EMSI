#include<ctype.h>
#include<iostream>

using namespace std;

int delim(string chaine, int i);
void analyse(string chaine);
void identificateur(string chaine);

int main()
{
    string chaine;
    cout << "Entrez la chaine a traiter : ";
    getline(cin, chaine);

    analyse(chaine);

    return 0;
}

int delim(string chaine, int i)
{
    int etat = 0;
    while (true)
    {
        switch (etat)
        {
            case 0:
                if(chaine[i] == ' ' || chaine[i] == '\t'){
                    etat = 1;
                    i++;
                }
                break;
            case 1:
                if(chaine[i] == ' ' && chaine[i] == '\t'){
                    i++;
                } else {
                    etat = 2;
                }
                break;
            case 2:
                return i;
        }
    }
}


void identificateur(string chaine){


 int i = 0 , etat=0 ;
    while (true)
    {
        switch (etat)
        {
            case 0:
                if(isalpha(chaine[i])){ 
                    etat=2;
                   
                    i++;
                }
                break;
            case 1:
                if(alpha()){
                    i++;
                } else {
                    etat = 2;
                }
                break;
            case 2:
                return i;
        }
    }






    
}


void analyse(string chaine)
{

    
}