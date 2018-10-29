#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 10
int main(){
	int aleatorio1, aleatorio2, resultado;
	
	srand((unsigned)time(NULL)); //inicializa a semente
	
	
	for(int i=0; i<max; i++){
		
	aleatorio1=1+rand()/(RAND_MAX/9 +1);
	aleatorio2=1+rand()/(RAND_MAX/9 +1);
	
	printf("Quanto é %d x %d: ", aleatorio1, aleatorio2);
	
	scanf("%d", &resultado);
	
	if(resultado==(aleatorio1*aleatorio2)){
		printf("Certo!\n");
	}
	else{
		printf("Errado! O resultado é %d\n", (aleatorio1*aleatorio2));
	}
}
}
