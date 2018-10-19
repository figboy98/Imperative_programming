#include <stdio.h>
int main(){
	
	int valor, maximo=0;
	
	do{
		scanf(" %d", &valor);
		
		if(valor ==0){
			break;
		}
		
		else if( valor>maximo ){
			maximo=valor;
		}
		
		else{
			continue;
		}
	} while(valor !=0);
	
	printf("O valor máximo é: %d\n", maximo);
}
