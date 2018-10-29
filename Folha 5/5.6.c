#include <stdio.h>
#include <ctype.h>
int main(){
	int letra1, ch;
	
	while((ch=getchar()) != '\n'){
		if(ch==' '){
			putchar(ch);
			letra1=getchar();
			letra1=toupper(letra1);
			putchar(letra1);
			
		}
		else{
			putchar(ch);
		}
	}
	putchar('\n');
}
		
		
