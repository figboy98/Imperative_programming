#include <stdio.h>

char *procurar( char *str, char ch){
	
	while(*str != '\0'){
		if(*str == ch){
			return str;
		}
		str++;
	}
	return NULL;
}

int main(){
	char str[100]= "Hello World";
	char ch='W';
	
	char aux=(*procurar(str, ch));
	
	printf("%c", aux);
}
