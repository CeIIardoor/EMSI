#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// expression reguliere : ab(cb)*

int main() {
    int i = 0;
    int etat = 0;
    string chaine;

    printf("Entrez une chaine : ");
    gets(chaine);

    while(chaine[i] != '\0') {
        switch(etat) {
            case 0:
                if(chaine[i] == 'a') {
                    etat = 1;
                }
                else {
                    printf("Erreur");
                    exit(0);
                }
                break;
            case 1:
                if(chaine[i] == 'b') {
                    etat = 2;
                }
                else {
                    printf("Erreur");
                    exit(0);
                }
                break;
            case 2:
                if(chaine[i] == 'c') {
                    etat = 1;
                }
                else {
                    printf("Erreur");
                    exit(0);
                }
                break;
        }
        i++;
    }
}