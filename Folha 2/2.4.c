#define IVA 0.23
#include <stdio.h>
int main(){
	float semIva=0, comIva=0;
	
	printf("Insira o valor sem iva:");
	scanf("%f", &semIva);
	
	comIva=(semIva*IVA)+semIva;
	
	printf("Valor com Iva: %.2f\n", comIva);
	return 0;
}
