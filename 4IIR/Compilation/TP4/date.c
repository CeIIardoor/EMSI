// Automate validation date au format jj/mm
// Hypotheses : tout les mois on 30 jours


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char sdate[255];
    gets(sdate);
    int i = 0;
    int etat = 0;
    while(1){
        switch(etat){
            case 0:
                if(sdate[i] >= '0' && sdate[i] <= '3' ){
                    if (sdate[i] == '1' || sdate[i] == '2'){
                        etat = 11;
                    }
                    if (sdate[i] == '3'){
                        etat = 12;
                    } 
                    if (sdate[i] == '0'){
                        etat = 13;
                    } 
                } else {
                    printf("invalid date ");printf("%d",etat);exit(1);
                }
                break;
            case 11:
                if(sdate[i] >= '0' && sdate[i] <= '9' ){
                    etat = 2;
                } else {
                    printf("invalid date ");printf("%d",etat);exit(1);
                }
                break;
            case 12:
                if(sdate[i] == '0'){
                    etat = 2;
                } else {
                    printf("invalid date ");printf("%d",etat);exit(1);
                }
                break;
            case 13:
                if(sdate[i] >= '1' && sdate[i] <= '9' ){
                    etat = 2;
                } else {
                    printf("invalid date ");printf("%d",etat);exit(1);
                }
                break;
            case 2:
                if(sdate[i] == '/'){
                    etat = 3;
                } else {
                    printf("invalid date ");printf("%d",etat);exit(1);
                }
                break;
            case 3:
                if(sdate[i] == '0' || sdate[i] == '1' ){
                    if (sdate[i] == '0'){
                        etat = 41;
                    }
                    if (sdate[i] == '1'){
                        etat = 42;
                    } 
                } else {
                    printf("invalid date ");printf("%d",etat);exit(1);
                }
                break;
            case 41:
                if(sdate[i] >= '1' && sdate[i] <= '9' ){
                    etat = 5;
                } else {
                    printf("invalid date ");printf("%d",etat);exit(1);
                }
                break;
            case 42:
                if(sdate[i] == '0' || sdate[i] == '1' || sdate[i] == '2'){
                    etat = 5;
                } else {
                    printf("invalid date ");printf("%d",etat);exit(1);
                }
                break;
            case 5:
                if(sdate[i] == '\0'){
                    printf("valid date"); return 0;
                } else {
                    printf("invalid date ");printf("%d",etat);exit(1);
                }
                break;
        }
        i++;
    }
    return 0;
}