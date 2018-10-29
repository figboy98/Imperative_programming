#include <stdio.h>
int repetidos();
int main(){
	int a[5]={2, -1, 0, 2,-1};
	
	int b[5]={3,4,1,2,-1};
	
	printf("%d\n", repetidos(a,5));
	printf("%d\n", repetidos(b,5));
}
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

