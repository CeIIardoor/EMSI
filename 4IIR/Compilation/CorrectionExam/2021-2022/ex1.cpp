#include <stdio.h>
#include <string.h>



int main()
{
    string chaine;
    gets(chaine);
    int i = 0;
    int etat = 'A';

    while(chaine[i] != '\0'){
        switch (etat)
        {
            case A:
                if (chaine[i] == '1'){
                    etat = 'B';
                } else {
                    printf("Erreur");
                    exit(0);
                }
                break;
            case B:
                if (chaine[i] == '0'){
                    etat = 'C';
                } else if (chaine[i] == '1'){
                    etat = 'A';
                } else {
                    printf("Erreur");
                    exit(0);
                }
                break;
            case C:
                if (chaine[i] == '0'){
                    etat = 'C';
                } else if(chaine[i] == '\0'){
                    printf("oui ");exit(1);
                } else {
                    printf("non ");exit(1);
                }
                break;
        }
        i++;
    }
}