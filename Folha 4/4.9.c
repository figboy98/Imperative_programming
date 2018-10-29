#include <stdio.h>
int maximoDivisorComum();
int main(){
	int numerador, denominador;
	
	printf("Escreva o numerador: "); scanf("%d", &numerador);
	
	printf("Escreva  o denominador: "); scanf("%d", &denominador);
	

	
int aux=maximoDivisorComum(numerador, denominador);
	
	numerador=numerador/aux;
	denominador=denominador/aux;
	
	printf("Numerador: %d\n", numerador);
	printf("Denominador: %d\n", denominador);
}
	
	int maximoDivisorComum(int numerador, int denominador){
		 while(denominador !=0){
			 int r= numerador%denominador;
			 numerador=denominador;
			 denominador=r;}
			 
			 return numerador;
		 }

