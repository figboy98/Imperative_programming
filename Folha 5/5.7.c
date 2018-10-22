#include <stdio.h>
#include <ctype.h>
int pontuacao();
int main(){
	int ch, soma=0;
	
	while((ch=getchar()) != '\n'){
		ch=toupper(ch); //converte tudo para maisculas
		
		if(isalpha(ch)){ //se o caracter lido for uma letra chama a função para calcular o seu valor
			soma=soma+(pontuacao(ch));
		}
		if(!isalpha(ch)){
			continue;
		}
	}
	printf("A pontuação da palavra é: %d", soma);
}
	int pontuacao(int ch){
		switch(ch){
		case 'D': 
		case 'G': return 2;
			break;
		
		case 'B': 
		case 'C':
		case 'M':
		case 'P': return 3;
			break;
		
		case 'F': 
		case 'H': case'V':
		case 'W':
		case 'Y': return 4;
			break;
		
		case 'K': return 5;
			break;
		
		case 'J': 
		case 'X':return 8;
			break;
		
		case 'Q': 
		case 'Z':return 10;
			break;
		
		default: return 1; //'A', 'E', 'I', 'L', 'N', 'O', 'R', 'T', 'S', 'U'
			break;
		}
			
			
}
