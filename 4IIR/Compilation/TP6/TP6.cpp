/* Analyseur lexical 1 er version*/
#include <ctype.h>
#include <iostream>
using namespace std;

int delim(string chaine, int i);
int identificateur(string chaine, int i);
int reel(string chaine, int i);
void analyse(string chaine);

int main() {
	// string chaineATraiter; 
    
	// cout<<" Donner un code a traiter: ";
	// getline(cin, chaineATraiter);
  
	// analyse(chaineATraiter);

    string chaine;
    cout<<" Donner le reel a traiter: ";
    getline(cin, chaine);
    int r = reel(chaine , 0);
    cout << r << endl;
	return 0;
}
int delim(string chaine, int i) {
    int etat = 0;
    while(true) {
        switch(etat) {
            case 0:{
               if(chaine[i] == ' ' || chaine[i] == '\t') // facultatif
	      		{etat = 1; i++;} 
                break;
            		}                
            case 1: {
                if(chaine[i] == ' ' ||  chaine[i] == '\t') {i++;}
                else {etat = 2;}
                break;
            		}
            case 2:
                return i;
        }
    }
}
int identificateur(string chaine, int i) {
    int etat = 0, j, k = i;
    while(1) {
        switch(etat) {
            case 0:
                if(isalpha(chaine[i])) { etat = 1; i++; }
                break;            
            case 1:
                if(isalnum(chaine[i])) {etat = 1;  i++;}
                else {
                    etat = 2;
                }
                break;            
            case 2:
                cout<<"\t****> identificateur : ";
                for(j = k; j < i; j++) { cout<< chaine[j]; }
                cout<<endl;
                return i;
        }
    }
}

void analyse(string chaine) {
    int k,i = 0;
    char copie[100];
    for(i=0; i< chaine.length(); i++)
	 {
        if(chaine[i] == ' ' || chaine[i] == '\t') 
		{
			i = delim(chaine, i);
        }

        copie[k] = chaine[i]; 
        k++;
    }
       for(i = 0; i < chaine.length(); i++)
	    {
       		if(isalpha(chaine[i]))  
	   			{
            	i = identificateur(chaine, i);
       			} 
    	}
    
    copie[k] = '\0'; //pour delimiter la chaine, c'est important
    cout<<"\n\t la chaine traitee est : "<<copie<<"\n\n";	

    
}

// (+|-)?[0-9]+(\.[0-9]+)?((E|e)(+|-)?([0-9]+))?

int reel(string chaine, int i){
    int etat = 0, j, k = i;
    while(1) {
        switch(etat) {
            case 0:
                if(isdigit(chaine[i])) { etat = 2; i++; }
                else if(chaine[i] == '+' || chaine[i] == '-') {etat = 1; i++;}
                break;            
            case 1:
                if(isdigit(chaine[i])) {etat = 2;  i++;}
                break;            
            case 2:
                if(isdigit(chaine[i])) {etat = 2;  i++;}
                else if(chaine[i] == '.') {etat = 3; i++;}
                else if(chaine[i] == 'E' || chaine[i] == 'e') {etat = 5; i++;}
                else {etat = 8;}
                break;            
            case 3:
                if(isdigit(chaine[i])) {etat = 4;  i++;}
                break;            
            case 4:
                if(isdigit(chaine[i])) {etat = 4;  i++;}
                else if(chaine[i] == 'E' || chaine[i] == 'e') {etat = 5; i++;}
                else {etat = 8;}
                break;
            case 5:
                if(isdigit(chaine[i])) {etat = 7;  i++;}
                else if(chaine[i] == '+' || chaine[i] == '-') {etat = 6; i++;}
                break;
            case 6:
                if(isdigit(chaine[i])) {etat = 7;  i++;}
                break;
            case 7:
                if(isdigit(chaine[i])) {etat = 7;  i++;}
                else {etat = 8;}
                break;
            case 8:
                cout<<"\t****> reel : ";
                for(j = k; j < i; j++) { cout<< chaine[j]; }
                cout<<endl;
                return i;
        }
    }
}