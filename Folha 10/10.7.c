#include <stdio.h>
#include <stdlib.h>
int contar_espacos(char *str){
	int cont=0;
	char *p;
	
	while(*str != '\0'){
		if(*str == ' '){
			cont++;
		}
		str++;
	}
	return cont;
}

int main(){
	char str[100]="   ";
	
	
	int espacos=(contar_espacos(str));
	
	printf("%d\n", espacos);
	return 0;
}
	
