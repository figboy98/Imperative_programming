#include <stdio.h>

int palindromo(char str[])
{
	int i=0, j;
	
	for(j=0; str[j]!='\0'; j++){
	}
	
	for(i=0; i<j; i++){
		if(str[i] != str[j-1])
		{
			return 0;
		}
		j--;
	}
}

int main(){
	char ch;
	char str[30];
	int i=0;
	while((ch=getchar()) != '\n')
	{
		str[i]=ch;
		i++;
	}
	
	if((palindromo(str)) != 0)
	{
		printf("É palindromo\n");
	}
	else
	{
		printf("Não é palindromo\n");
	}
}
