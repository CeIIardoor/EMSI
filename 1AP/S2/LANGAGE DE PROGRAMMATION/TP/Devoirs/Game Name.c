#include<stdio.h>
#include<string.h>
main()
{
	char Player1[25];
	char Player2[25];
	char Name1[25];
	char Name2[25];
	int i, c;
	printf("\t\t\t\t\t___Helloooooo :D we gonna play the Names Game.___\n");
	printf("\nPlayer1:Enter your first name:  ");
	gets(Player1);
	printf("\nPlayer2:Enter your first name:  ");
	gets(Player2);
	printf("\nAlright, now %s will type a name and %s will try to find it depending on how many letter in the name.\n", Player1, Player2);
		do
		{
		fflush(stdin);
		printf("\n*%s*: Type a Name: ", Player1);
		gets(Name1);
		printf("\n********The Name contain %d letter xD********.\n", strlen(Name1));
		printf("\n*%s*:Try to find the name (you have 3 tentatives/Goodluck): ", Player2);
		fflush(stdin);
		gets(Name2);
		printf("\n");
		game:
		for(i=1; i<=3; i++)
		{
			if(strcmp(Name1, Name2)==0)
				{
					printf("\n-_-_-_-_-:) Congratulations, you found the Name (%s) in %d tentative(s)-_-_-_-_-\n", Name1, i);
					printf("\n ___%s Win the game___\n", Player2);
					i=4;
				}
			else
				{
					if(i<3)
					{
						printf("\n:( False Name, Try again (%d tentative(s) left):", (3-i));
						gets(Name2);
					}
					if(i==3)
					{
						printf("\n:( False Name, %d tentative(s) left\n", (3-i));
						printf("\n ___%s win the game___\n", Player1);
					}
				}
		}
		printf("\nTo leave press '0' ________ To continue press '1'\n");
		scanf("%d",&c);
		if(c==0)
		{
			printf("\n\t\t\t\t\tGoodbye %s and %s, Comeback soon <3\n", Player1, Player2);
			return 0;
		}
		else
		{
			printf("\n\t\t\t\t\tAlright, lets play more\n");
		}
	}
	while(c!=0);
}
