#include <stdio.h>
#define	 PI	3.14
int main(){
	float raio=0, volume=0;
	
	printf("Insira o valor do raio da esfera:");
	scanf("%f", &raio);
	volume=(4.0/3.0)*PI*raio*raio*raio;
	
	printf("O volume da esfera é: %f\n", volume);
	
	return 0;
}
	
