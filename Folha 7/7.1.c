#include <stdio.h>
#include <ctype.h>
#include <string.h>

void capitalizar(char str[])
{
int size=strlen(str);

	for(int i=0; i<size; i++)
	{
		if(isalpha(str[i]))
		{
			str[i]=toupper(str[i]);
		}
	}
}

int main()
{
	char str[20];
	
	int aux;
	int i=0;
	scanf("%d", &aux);
	
	while(aux!= '\0')
	{
		str[i]=aux;
		i++;
		scanf("%d", &aux);
	}
	
	capitalizar(str);
	
int size=strlen(str);

for(int i=0; i<size; i++)
	{
		printf("%d", str[i]);
	}
}	

