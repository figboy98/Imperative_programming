#include <stdio.h>

int main(){
	int val1, val2,val3,mediana,max,min;
	
	printf("Primeiro valor:"); scanf("%d", &val1);
	printf("Segundo valor:"); scanf("%d", &val2);
	printf("Terceiro valor:"); scanf("%d", &val3);
	
	int soma=val1+val2+val3;
	
	if(val1 >=val2){ 
		max=val1;
		min=val2;
	}
	else if(val2>=val1){
		max=val2;
		min=val1;
	}

	if(val3>=max){
		max=val3;
	}
	
	if(val3 <=min){
		min=val3;
	}
	
	mediana=soma-max-min;
	
	printf("Mediana: %d\n", mediana);
	
}
