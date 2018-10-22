#include <stdio.h>

int main() {
	float x,valor;
	
	printf("Insira o valor de x:"); scanf("%f", &x);
	
	valor=(((((3*x+2)*x-5)*x-1)*x+7)*x-6);
	
	printf("O resultado é: %f\n", valor);
	
	return 0;
}
	
