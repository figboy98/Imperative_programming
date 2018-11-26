#include <stdio.h>
#include <string.h>

void ordenar(char str[])
{
	int x, j;
	for(int i=0; str[i] != '\0'; i++)
	{
		int x= str[i];
		j=i-1;
		
		while(j>=0 && str[j] >x)
		{
			str[j+1]=str[j];
			j--;
		}
	str[j+1]=x;
}
}

int main()
{
	char str[30];
	scanf(" %s", str);
	ordenar(str);
	
	for(int i=0; str[i] != '\0'; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
		
