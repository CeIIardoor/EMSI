#include<stdio.h>
#include<string.h>

// expression reguliere : (ba)+b

int main(){
    int etat = 0;
    int i = 0;
    int compteur_ba = 0;
    string chaine;
    gets(chaine);

    while(chaine[i] != '\0') {
        switch(etat) {
            case 0:
                if(chaine[i] == 'b') {
                    etat = 1;
                }
                else {
                    printf("Erreur");
                    exit(0);
                }
                break;
            case 1:
                if(chaine[i] == 'a') {
                    compteur_ba++;
                    etat = 0;
                }
                else if (chaine[i] == 'b'){
                    etat = 2;
                }
                else {
                    printf("Erreur");
                    exit(0);
                }
                break;
        }
        i++;
    }
    printf("chaine valide !");
    printf("Nombre de ba : %d", compteur_ba);
    return 0;
}