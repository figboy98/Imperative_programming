#include <stdio.h>

int main(){
	int size, val;
	printf("Escreva o tamanho do vetor"); scanf("%d", &size);
	printf("Escreva o valor a escrever no vetor"); scanf("%d", &val);
	
}
	void inicializa(int size, int val){
		int vec[size];
		int i;
		for(i=0; i<size; i++){
			vec[i]=val;
		}
	}
	
