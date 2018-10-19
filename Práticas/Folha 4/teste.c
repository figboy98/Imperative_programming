#include <stdio.h>
int main(){
	int i=9384;
	
	do{
		printf("%d\n", i%10);
		i/=10;
	} while(i>0);
}
