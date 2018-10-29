#include <stdio.h>
int ocorre();
int main(){
	int vec[10]={1,2,3,4,5,6,7,8,9,10};
	int val=12;
	int size=10;
	printf("%d\n", ocorre(vec,size,val));
}
int ocorre(int vec[], int size, int val){
	
	for(int i=0; i<size; i++){
		
		if(val==vec[i]){
			return 1;
		}
	}
	return 0;
}
			
	
