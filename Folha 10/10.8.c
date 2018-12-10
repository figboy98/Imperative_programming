#include <stdio.h>
#include <string.h>

void inverter(char *str){
	
	char *inicio= str;
	char *fim = str + strlen(str) -1;
	
	while(fim > inicio){
		char ch= *fim;
		*fim=*inicio;
		*inicio=ch;
		
		inicio++;
		fim--;
	}
}


		

int main(){
	char str[100]="abc123";
	
	inverter(str);
	
	int i=0;
	
	while(str[i] !='\0'){
		printf("%c", str[i]);
		i++;
	}
	
	return 0;




}
	
