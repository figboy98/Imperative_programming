#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//Obter um aleatório entre 0 e 9
int main(){
	int aleatorio;
	srand((unsigned)time(NULL));
	
	aleatorio=1+rand()/(RAND_MAX/9 +1);
	
	printf("%d\n", aleatorio);
}
	
