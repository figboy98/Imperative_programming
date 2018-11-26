#include <stdio.h>
#include <string.h>
void ordena(char str[])
{
	for(int i=0; str[i] != '\0'; i++)
	{
		int x= str[i];
		int j=i-1;
		
		while(j>=0 && str[j] >x)
		{
			str[j+1]=str[j];
			j--;
		}
		str[j+1] =x;
	}
}
	
	
int anagramas(char str1[], char str2[])
{
	ordena(str1);
	ordena(str2);
	
	int size1=strlen(str1);
	int size2=strlen(str2);
	
	if(size1 != size2)
	{
		return 0;
	}
	
	for(int i=0; i<size1; i++)
	{
		if(str1[i] != str2[i])
		{
			return 0;
		}
	}
	return 1;
}

void main()
{
	char str1[30], str2[30];
	printf("Escreva a primeira palavra: "); scanf(" %s", str1);
	
	printf("Escreva a segunda palavra: "); scanf(" %s", str2);

	int r= anagramas(str1, str2);
	printf("%d\n", r);
}
