#include <stdio.h>
#include <string.h>
int decimal(char str[]){
	int size=strlen(str);
	int numero=0;
	int multiplicador=1;
	
	for(int i=size-1; i>=0; i--)
	{ 
		int n= (str[i] - '0');  // Converte o caracter que está na string como char para o número correspondente
		numero+= (n*multiplicador);
		multiplicador*=10;
	}
	return numero;
}

int main(){
	char str[100];
	
	int ch;
	int i=0;
	scanf("%s", str);
		
		
	//for(int i=0; i<strlen(str); i++){
		//printf("%d", str[i]);
	//}
	
	int numero=decimal(str);
	
	
	
	printf("%d",numero);
	
	return 0;
}
	
