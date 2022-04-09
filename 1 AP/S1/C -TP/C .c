#include<stdio.h>
int main() 
{
    int i, s, NL, i2=1;
    printf("Donnez le nombre de lignes: ");
    scanf("%d", &NL);
    for (i=1; i<=NL; i++,i2=0)
	{
        for (s=1; s<=NL-i; s++)
        {
		 printf("  ");
	    }
        while (i2!=2*i-1)
		{
            printf("%d ", i2);
            i2++;
        }
        printf("\n");
    }    
    return 0;
}

