#include <stdio.h>
int ocorre();
int main(){
	
	int vec[10];
	int i=0;
	int ch;
	scanf("%d", &ch);
	while((ch !=-1)){
		if(ocorre(vec, 10, ch) == 0){
		vec[i]=ch;
		i++;}
		scanf("%d", &ch);
	}
	
	for(int k=0; k<i; k++){
		printf("%d, ", vec[k]);
	}
}
			
		
int ocorre(int vec[], int size, int val){
	
	for(int i=0; i<size; i++){
		
		if(val==vec[i]){
			return 1;
		}
	}
	return 0;
}
