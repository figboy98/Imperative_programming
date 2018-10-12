#include <stdio.h>
int main(){
	int x, n, valor=1;
	printf("base:"); scanf("%d", & x);
	printf("Potência:"); scanf("%d", &n);
	
	if(n==0){
		valor=1;
	}
	
	for(int i=0; i<n; i++){
		valor*=x;
	}
	printf("valor da potência: %d\n", valor);
}

