#include <stdio.h>
#include <math.h>
double aprox_pi();
int main(){
	int limite;
	double pi;
	scanf("%d", &limite);
	
	pi=(aprox_pi(limite));
	
	printf("%lf\n", M_PI);
	
	printf("Pi = %lf\n", pi);
}

double aprox_pi(int limite){
	double soma=0, fracao=1, numerador=-1, denominador=1; 
	for(int i=0; i<=limite; i++){
		
		numerador*=-1;
		
		denominador= (2*i) +1;
		
		fracao=numerador/denominador;
		
		soma+=fracao;
	}
	
	return 4*soma;
}
		
			
			
			
	
