#include <stdio.h>

int main(){
	
	float valor;
	int contagem=0;
	
	do{
		scanf("%f", &valor);
		
		if(valor==0){
			break;
		}
		
		else{
			valor+=valor;
			contagem++;
		}
	}while(valor !=0);
	
	int aux=valor/contagem;
	
	printf("A média é: %f", aux);
	
}
