#include <stdio.h>

int main(){
	int valor, div=2;
	
	printf("Escreva o número a fatorizar: "); scanf("%d", &valor);
	
	
	while(valor !=1){
		
		if(valor%div==0){
			printf("%d", div);
			if(valor/div !=1){
				printf(" x ");
			}
			else{
				printf("\n");
			}
			valor=valor/div;
		}
		
		else{
			div++;
		}
	}
}	
		
		
		
