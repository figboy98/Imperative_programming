#include <stdio.h>
#include <string.h>
void eliminar(char str[], char ch)
{
	int size=strlen(str);
	int i=0;
	
	while(str[i] != ch && i<size)
	{
		i++;
	}
	for(i; i<size; i++)
	{
		str[i]=str[i+1];
	}
	str[size-1]= '\0';
}

int main()
{
	char str[20];
	char ch;
	int i=0;
	
	printf("Escrever sequência de caracteres:"); scanf(" %s", str);
	
	printf("Escrever caracter a eliminar:"); scanf(" %c", &ch);
	eliminar(str, ch);
	
	int size=strlen(str);
	
	for(int i=0; i<size; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
	return 0;
}
	
