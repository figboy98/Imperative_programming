#include <stdio.h>
#include <ctype.h>
#include <string.h>

int algum_digito(char str[]){
	int cont=0;
	int size=strlen(str);
	
	for(int i=0; i<size; i++)
	{
		if(isdigit(str[i]))
		{
			cont++;
		}
	}
	if(cont>0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	char str[20];
	char aux;
	int i=0;
	while((aux=getchar()) != '\n')
	{
		str[i]=aux;
		i++;
	}
	
	printf("%d\n", algum_digito(str));
}
		
