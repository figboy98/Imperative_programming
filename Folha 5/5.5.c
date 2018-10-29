#include <stdio.h>
int main(){
	int letras=0;
	printf("Escreva a frase:");
	int ch;
	while((ch=getchar()) != '\n'){
		if((ch>='A' && ch <= 'Z') || (ch>='a' && ch<='z')){
			letras++;
		}
		
	}
	printf("A frase contém %d caracteres", letras);
	
	return 0;
} 

