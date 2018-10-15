#include <stdio.h>
int main(){
	int valor, aux, bin=0, multiplicador=1;
	
	printf("Escreva o número que quer passar para binário: ");
	scanf("%d", &valor);
	
	while(valor!=0){
		aux=valor%2;
		bin+=aux*multiplicador;
		multiplicador*=10;
		valor/=2;
	}
	
	printf("O numero decimal convertido para binário é: %d\n", bin);
		

	return 0;
}

			
		
