#include <stdio.h>
#include <ctype.h>
#include <string.h>



int todos_letras(char str[])
{
	int size=strlen(str);
	for(int i=0; i<size; i++){
		if(!isalpha(str[i]))
		{
			return 0;
		}
	}
	return 1;
}
	
int main(){
	char str[100];
	char ch;
	int i=0;
	while((ch=getchar()) != '\n')
	{
		str[i]=ch;
		i++;
	}
	
	printf("%d\n", todos_letras(str));
}

	
