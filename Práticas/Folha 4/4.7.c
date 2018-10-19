#include <stdio.h>
int main(){	
	
	int ano;
	printf("Escreva o ano: "); scanf("%d", &ano);
	
while(ano >0){
	if((ano %4==0 && ano%100 !=0 || ano %100 ==0 && ano %400 ==0)){
		printf("%d", ano);
		return 0;
	}
	else{
		ano ++;
	}
}
} 
