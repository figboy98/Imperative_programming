#include <stdio.h>
#define FALSE 0
#define TRUE 1
int primo();
void main(){
 int limite;
 printf("Escreva o limite superior para testar números primos: "); scanf("%d", &limite);
 
	for(int k=2; k<=limite; k++){
		if(primo(k)){
			printf(" %d ", k);
		}
	}
	printf("\n");
}

int primo(int n){
	if(n<=1){
		return FALSE;
	}
	for(int i=2; i*i<=n; i++){
		if(n%i==0){
			return FALSE;
		}
	}
	return TRUE;
	
}

