#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	char ch[151];
	int i, j, k;
	printf("Veuillez entrer un text de 150lettres max :\n");
	gets(ch);
	for(k=0;k<strlen(ch);k++) //Boucle de verification si j'ai remplac� une escpace avec l'autre
	{
		for(i=0;i<strlen(ch);i++) //Boucle de traitement et remplacement d'espace par le charact�re suivant
		{
			if(ch[i]==' ')
			{
				ch[i]=ch[i+1];
				for(j=i+1;j<strlen(ch);j++) //Boucle de decalage des �lements du tableau
				{
					ch[j]=ch[j+1];
				}
			}
	
		}
	}
	printf("%s", ch);
	
}
