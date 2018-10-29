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

	//Para formar o número binário usamos a mesma lógica da decomposição de numeros decimais somando os seus digitos
	//multiplicados pela casa onde estão. Exemplo: 1234= 4*1 + 3*10 + 2*100 +1 *1000		
		
