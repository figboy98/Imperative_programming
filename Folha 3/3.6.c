#include <stdio.h>
int main(){
	
	int val1,val2,val3,contador;

	printf("Primeiro valor:"); scanf("%d", &val1);
	printf("Segundo valor:"); scanf("%d", &val2);
	printf("Terceiro valor:"); scanf("%d", &val3);

	if(val1!=val2 && val1!=val3 &&val2!=val3){
		contador=3;
		printf("Resposta: %d valores distintos\n", contador);
		return 0;
	}
	
	if(val1==val2 && val1==val3 && val2==val3){
		contador=1;
		printf("Resposta: %d valores distintos\n", contador);
		return 0;
	}
	
	else{
		contador=2;
		printf("Resposta: %d valores distintos\n", contador);
		return 0;
	}
	
	
}
		
