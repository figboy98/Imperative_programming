#include <stdio.h>

int main(){
	float soma=0, n;
	int contagem=0;
	
	printf("Escreva os números:");
	
	scanf("%f", &n);
	
	while(n!=0){
		
		soma+=n; 
		contagem++;
		
		scanf("%f", &n);
	}
		
	float media=soma/contagem;
	
	printf("Média = %.2f\n", media);
	return 0;
}
		
