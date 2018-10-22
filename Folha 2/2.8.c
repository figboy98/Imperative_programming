#include <stdio.h>
#
int main(){
	
	float x,pol5,pol4,pol3,pol2,pol1,pol0, valor;
	
	printf("Insira o valor de x: "); scanf(" %f", &x);
	
	
	
	pol5=3*(x*x*x*x*x);
	
	pol4=2*(x*x*x*x);
	
	pol3=5*(x*x*x);
	
	pol2=(x*x);
	
	pol1=7*x;
	
	pol0=6;
	
	valor=(pol5+pol4-pol3-pol2+pol1-pol0);
	
	printf("O resultado é: %f\n", valor);
	
	return 0;
	
}
	
	
	
