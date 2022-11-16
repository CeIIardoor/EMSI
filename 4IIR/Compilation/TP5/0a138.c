// automate qui reconnait les nombres de 0 a 138 sans zero initial

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
                if(chaine[i] == '0'){
                    etat = 11;
                } else if (chaine[i] >= '2' && chaine[i] <= '9'){
                    etat = 12;
                } else if (chaine[i] == '1'){
                    etat = 13;
                } else {
                    printf("chaine invalide ");printf("%d",etat);exit(1);
                }
                break;
                case 11:
                    if(chaine[i] == '\0'){
                        printf("chaine valide ");printf("%d",etat);exit(0);
                    } else {
                        printf("chaine invalide ");printf("%d",etat);exit(1);
                    }
                    break;
                case 12:
                    if(chaine[i] >= '0' && chaine[i] <= '9'){
                        etat = 21;
                    } else {
                        printf("chaine invalide ");printf("%d",etat);exit(1);
                    }
                    break;
                case 13:
                    if(chaine[i] >= '0' && chaine[i] <= '2'){
                        etat = 22;
                    } else if(chaine[i] >= '4' && chaine[i] <= '9'){
                        etat = 23;
                        } else if (chaine[i] == '3'){
                        etat = 24;
                    } else {
                        printf("chaine invalide ");printf("%d",etat);exit(1);
                    }
                    break;
                case 21:
                    if(chaine[i] == '\0'){
                        printf("chaine valide ");printf("%d",etat);exit(0);
                    } else {
                        printf("chaine invalide ");printf("%d",etat);exit(1);
                    }
                    break;
                case 22:
                    if(chaine[i] >= '0' && chaine[i] <= '9'){
                        etat = 31;
                    } else {
                        printf("chaine invalide ");printf("%d",etat);exit(1);
                    }
                    break;
                case 23:
                    if(chaine[i] == '\0'){
                        printf("chaine valide ");printf("%d",etat);exit(0);
                    } else {
                        printf("chaine invalide ");printf("%d",etat);exit(1);
                    }
                    break;
                case 24:
                    if(chaine[i] >= '0' && chaine[i] <= '8'){
                        etat = 32;
                    } else {
                        printf("chaine invalide ");printf("%d",etat);exit(1);
                    }
                    break;
                case 31:
                    if(chaine[i] == '\0'){
                        printf("chaine valide ");printf("%d",etat);exit(0);
                    } else {
                        printf("chaine invalide ");printf("%d",etat);exit(1);
                    }
                    break;
                case 32:
                    if(chaine[i] == '\0'){
                        printf("chaine valide ");printf("%d",etat);exit(0);
                    } else {
                        printf("chaine invalide ");printf("%d",etat);exit(1);
                    }
                    break;

        }
        i++;
    }

}