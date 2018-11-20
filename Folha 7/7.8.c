#include <stdio.h>
#include <string.h>
#include <ctype.h>
int pontuacao( char n)
{
	switch (n){
		case 'D': case 'G':
			return 2;
		case 'B': case 'C': case 'M': case 'P':
			return 3;
		case 'F': case 'H': case 'V': case 'W': case 'Y':
			return 4;
		case 'K':
			return 5;
		case 'J': case 'X':
			return 8;
		case 'Q': case 'Z':
			return 10;
		default:
			return 1;
		}
	}

int scrabble(char str[])
{
	int size=strlen(str);
	int soma=0;
	for(int i=0; i<size; i++)
	{
		soma+=pontuacao(str[i]);
	}
	return soma;
}


int main()
{
	char str[100];
	scanf("%s", str);
	
	int size= strlen(str);
	
	for(int i=0; i<size; i++)
	{
		str[i]= toupper(str[i]);
	}
	int soma=scrabble(str);
	printf("%d\n", soma);
}
