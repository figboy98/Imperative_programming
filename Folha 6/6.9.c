#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 367
#define experiencias 10000
int repetidos(int vec[]){
	//int probabilidade;
	for(int i=0; i<N; i++){
		for(int j=i+1; j<N; j++){
			if(vec[i] == vec[j]){
				return 1;
			}
		}
	}
}

int main(){
	
	float contador=0;
	float probabilidade;
	int vec[N];
	int aleatorio;
	srand((unsigned)time(NULL));

	for(int i=0; i<experiencias; i++){
		
		for( int j=0; j<N; j++){
			aleatorio= 1+rand()/(RAND_MAX/365 +1);
			vec[j] = aleatorio;
		}
		
		if(repetidos(vec) ==1){
			contador++;
		}
		probabilidade = (contador/experiencias);
	}
	printf("Probabilidade: %f\n", probabilidade);


}
