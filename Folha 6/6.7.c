#include <stdio.h>
#include <ctype.h>
void contar_letras();
int main(){
	char ch;
	int letras[20];
	int i=0, aux=0;
	while((ch=getchar()) != '\n'){
		ch=toupper(ch);
		letras[i]=ch;
		i++;
		aux++;
		
	}

	
	contar_letras(letras, aux);
}

void contar_letras(int letras[], int aux){
	
	int contador=0;
	int vec[28];
		//A=65, Z=90
		for(int i=0; i<26;i++){
			
			vec[i]=('A'+i);
		}
		
		
	for(int i=0; i<26; i++){
		for(int j=0; j<aux; j++){
			if(letras[j]==vec[i]){
				contador++;
			}	
		}
		printf("%c:%d ", vec[i], contador);
		contador=0;
	}
}

