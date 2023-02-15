#include<stdio.h>
#include<string.h>

//expression reguliere: a* b a* (b a* b a*)*

int main() {
    int i = 0;
    int etat = 0;
    string chaine;
    printf("Entrer une chaine de caractere: ");
    gets(chaine);

    while(chaine[i] != '\0') {
        switch(etat) {
            case 0:
                if (chaine[i] == 'a') {
                    etat = 0;
                } else if (chaine[i] == 'b') {
                    etat = 1;
                } else {
                    printf("Erreur");
                    exit(1);
                }
                break;
            case 1:
                if (chaine[i] == 'a') {
                    etat = 2;
                } else if (chaine[i] == 'b') {
                    etat = 0;
                } else {
                    printf("Erreur");
                    exit(1);
                }
                break;
            case 2:
                if (chaine[i] == 'b') {
                    etat = 0;
                } else if (chaine[i] == 'a') {
                    etat = 2;
                } else {
                    printf("Erreur");
                    exit(1);
                }
                break;
        }
        i++;
    }

    return 0;
}