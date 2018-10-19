#include <stdio.h>

int main(){
	
	int ano;
	printf("Escreva o ano: "); scanf("%d", &ano);
	
	if(ano %4 ==0){
		if(ano %100 ==0 && ano %400 !=0){
			printf("Não é bissexto");
		}
		
		else if( ano %100 ==0 && ano %400 ==0){
			printf("É bissexto");
		}
		else{
			printf("É Bissexto");
		}
		return 0;
	}
	
	else{
		printf(" Não é bissexto");
	}
}

		
