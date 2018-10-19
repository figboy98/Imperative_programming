#include <stdio.h>
int main(){
	int valor, soma=0;
	
	printf(" Insira o valor:"); scanf("%d", &valor);
	
	for(int i=1; i<valor; i++){
		
		if(valor%i ==0){
			soma=soma+i;
		}
		
		}
	
	
	printf("A soma dos divisores é : %d\n", soma);
	
}
