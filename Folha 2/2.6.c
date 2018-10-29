#include <stdio.h>
int main(){
	int num1, num2,den1,den2;
	
	printf("Primeiro Numerador?"); scanf("%d", &num1);
	
	printf("Primeiro Denominador?"); scanf("%d", &den1);
	
	printf("Segundo Numerador?"); scanf("%d", &num2);
	
	printf("Segundo Denominador?"); scanf("%d", &den2);
	
	printf("%d/%d + %d/%d =", num1,den1,num2,den2);
	
	num1=num1*den2;
	
	num2=num2*den1;
	
	
	int numSoma=num1+num2;
	
	int denSoma=den1*den2;
	
	for (int i=2; i<=10; i++){
		if(numSoma%i ==0 && denSoma%i==0){
			numSoma=numSoma/i;
			denSoma=denSoma/i;
		}
		
	}
	
	printf(" %d/%d\n",numSoma, denSoma);
	
	return 0;
}
