#include<iostream>
#include<ctype.h>

using namespace std;


int delim(string chaine, int i)
{
	int etat = 0;
	while(true)
	{
		switch(etat)
		{
			case 0:
				
				if(chaine[i] == ' ' || chaine[i] == '\t')
				{
					etat = 1;
					i++;
				}
			break;
			
			case 1:
				if(chaine[i] == ' ' || chaine[i] == '\t')
					i++;
				else
					etat = 2;
			break;
			
			case 2:
				return i;
			break;
		}
	}
}

int identificateur(string chaine, int i)
{
	int etat = 0, j, k = i;
	while(true)
	{
		switch(etat)
		{
			case 0:
				if(isalpha(chaine[i]))
				{
					etat = 1;
					i++;
				}

			break;
			case 1:
				if(isalnum(chaine[i]))
				{
					etat = 1;
					i++;
				}
				else
					etat = 2;
			break;
			case 2:
				cout << "  - Identificateur : ";
				for(j=k; j<i; j++)
				{
					cout << chaine[j];
				}
				cout << endl;

				return i;
			break;
		}
	}
}

void analyse(string chaine)
{
	int unsigned n;
	int j = 0;
	char result[100];
	for(n = 0; n<chaine.length(); n++)
	{
		if(chaine[n] == ' ' || chaine[n] == '\t')
		{
			n = delim(chaine,n);
		}
		
		result[j] = chaine[n];
		j++;
		
	}
	
	
	for(int i = 0; i<chaine.length(); i++)
	{
		if(isalpha(chaine[i]))
		{
			i = identificateur(chaine, i);

		}
		
	}	
	
	result[j] = '\0';
	cout << "Le code traite is : " << result << endl;

}


main()
{
	
	string chaine;
	
	cout << "Entrer la chaine " << endl;
	getline(cin, chaine);
	
	
	analyse(chaine);
	
	
	
	
	
}
