#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	srand((unsigned)time(NULL));
	int aleatorio=1+rand()/(RAND_MAX/1000 +1);
	int i, count=1, tentativa;
	
	while(i){
		printf("Tentativa: ");
		scanf("%d", &tentativa);
		
		if(tentativa == aleatorio){
			printf("Acertou em %d tentativas\n", count);
			break;
		}
		
		else{
			if(tentativa< aleatorio){
				printf("Demasiado baixo\n");
			}
			else{
				printf("Demasiado alto\n");
			}
			count++;
		}
	}
}
