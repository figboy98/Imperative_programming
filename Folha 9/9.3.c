#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void ordena(char str[])
{
	for(int i=0; str[i] != '\0'; i++)
	{
		int x=str[i];
		int j=i-1;
		while(j>=0 && str[j] >x)
		{
			str[j+1]=str[j];
			j--;
		}
		str[j+1]=x;
	}
}

void normalizar(char str[])
{
	int i=0,aux=0;
	int size=strlen(str);
	
	ordena(str);
	
	for(int i=0; i<size; i++)
	{
		if(isalpha(str[i]))
		{
		str[i] = tolower(str[i]);
		}
	}
	
	for(int i=0; i<size; i++)
	{
		if(isalpha(str[i]))
		{
			for(int j=i; j<size; j++)
			{
				str[j] =str[j+1];
			}
			aux++;
		}
	}

}

void main()
{
	char str1[100], str2[100];
	
	fgets(str1, 100, stdin);
	fflush(stdin);
	fgets(str2,100, stdin);
	
	//normalizar(str1);
	//normalizar(str2);
	ordena(str1);
	fputs(str1, stdout);
	
}


	


