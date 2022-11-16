// not(*011*)


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char chaine[255];
    gets(chaine);
    int i = 0;
    int etat = 0;

    while (1) {
        switch(etat){
            case 0:
                if (chaine[i] == '\0') {
                    printf("chaine valide ");printf("%d",etat);exit(0);
                } else if(chaine[i] == '1'){
                    etat = 0;
                } else if (chaine[i] == '0'){
                    etat = 1;
                } else {
                    printf("chaine invalide ");printf("%d",etat);exit(1);
                }
                break;
                case 1:
                    if(chaine[i] == '\0'){
                        printf("chaine valide ");printf("%d",etat);exit(0);
                    } else if (chaine[i] == '1'){
                        etat = 2;
                    } else if (chaine[i] == '0'){
                        etat = 1;
                    } else {
                        printf("chaine invalide ");printf("%d",etat);exit(1);
                    }
                    break;
                case 2:
                    if(chaine[i] == '\0'){
                        printf("chaine valide ");printf("%d",etat);exit(0);
                    } else if (chaine[i] == '0'){
                        etat = 0;
                    } else {
                        printf("chaine invalide ");printf("%d",etat);exit(1);
                    }
                    break;
        }
        i++;
    }
}