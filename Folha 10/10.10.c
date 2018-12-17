#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comparar( char *str1, char *str2){
	if(strlen(str1) != strlen(str2)){
		return 0;
	}
		
		
	while(*str1 != '\0'){
		if(*str1 != *str2){
			return 0;
		}
		str1++;
		str2++;
	}
	return 1;
}

int main(){
	char str1[100]="Hello world";
	char str2[100]="Hello World";
	
	int aux=(comparar(str1, str2));
	
	printf("%d\n", aux);
	return 0;
}

