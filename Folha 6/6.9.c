#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100
int main(){
	int aleatorio;
	int vec[N];
	
	srand((unsigned)time(NULL));
	
	for(int i=0; i<N; i++){
		aleatorio= 1+ (rand()/RAND_MAX/365 +1);
		vec[i]=aleatorio;
	}
	
	if(
	
	
	
	
	
int repetidos(int vec[], int size){
	int i, j;
		
	for(i=0; i<size;i++){
		for(j=i+1; j<size; j++){
		if(vec[i]==vec[j]){
			return 1;
		}
	}
}

	return 0;
}
	
