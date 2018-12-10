#include <stdio.h>
#include <stdlib.h>

void store_zeros(int vec[], int n){
	int *p;
	
	for(p=vec; n>0; n--){
		*p=0;
		p++;
	}
}

int main(){
	int vec[]={1,2,3,4,5};
	int n=5;
	

	store_zeros(vec,n);
	
	for(int i=0; i<n; i++){
		printf("%d", vec[i]);
	}
	printf("\n");
	return 0;
}
	
