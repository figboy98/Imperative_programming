#include <stdio.h>

int main(){
	int valor=0;
	
	printf("Quantia em EUR:");
	scanf("%d", &valor);
	
	printf("notas EUR 20: %d\n", valor/20);
		
		int resto=(valor%20);  
	
	printf("notas EUR 10: %d\n", resto/10);
	
		resto= (resto%10);
	
	printf("notas EUR  5: %d\n", resto/5);
	
		resto=(resto%5);
		
	printf("moedas EUR 1: %d\n", resto/1 );
	
	return 0;
}
