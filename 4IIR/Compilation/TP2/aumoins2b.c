#include<stdio.h>
#include<string.h> 
#include<stdlib.h> 
#include<conio.h> 

int main(){
    char chaine[20];
    int i = 0;
    int longueur = 0;
    int etat = 0;
    int cpt_b = 0;

    chaine = gets();
    longueur = strlen(chaine);

    while(i <= longueur){
        switch(etat){
                case 0:
                    if(chaine[i] =='b') {etat = 1; cpt_b++;}
                    else if(chaine[i] =='a') continue;
                    else {printf("erreur");exit(1);}
                case 1:
                    if(chaine[i] =='b') {etat = 2; cpt_b++;}
                    else if(chaine[i] =='a') continue;
                    else {printf("erreur");exit(1);}
                case 2:
                    if(i == longueur) {printf("chaine valide avec %d",cpt_b); exit(0);}
                    else if(chaine[i] == 'a' || chaine[i] == 'b') continue;
                    else {printf("erreur");exit(1);}
            }
        i++;
    }
    

}