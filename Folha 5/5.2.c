#include <stdio.h>
int mdc();
int main(){
	
	int num1,num2;
	printf("Escreva o primeiro número: "); scanf("%d", &num1);
	printf("Escreva o segundo número: "); scanf("%d", &num2);
	
	printf("mdc(%d, %d) = ", num1,num2);
	
	mdc(num1, num2);
	printf("\n");
	return 0;
}

int mdc(int n1, int n2){
	int iteracoes=1;
	while(n1!=n2){
		if(n1>n2){
			n1=n1-n2;
		}
		else{
			n2=n2-n1;		
		}
		printf(" mdc(%d, %d) = ", n1, n2);
		iteracoes++;
	}
	
	printf(" %d \n", n1);
	printf("%d iteracoes\n ", iteracoes);
}
