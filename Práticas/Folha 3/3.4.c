#include <stdio.h>
int main(){
		int lado1, lado2,lado3;
		
		printf("Primeiro lado:"); scanf("%d", &lado1);
		
		printf("segundo lado:"); scanf("%d", &lado2);
		
		printf("Terceiro lado:"); scanf("%d", &lado3);
		
		if(lado1 ==lado2 && lado2==lado3){
			printf(" Triângulo equilátero\n\n");
		}
		
		else{
			if(lado1==lado2 || lado1==lado3 || lado2==lado3){
				printf("Triângulo isósceles\n");
			}
			else{
				printf("Triângulo escaleno\n");
			} 
	
		}
	}
