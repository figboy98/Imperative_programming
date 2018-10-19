#include <stdio.h>

int main(){
	float montante, comissao;
	
	
	
	
	do {
	printf("Introduza o montante: EUR ");
	scanf("%f", &montante);
	
	if(montante <2500){
		comissao=30 +0.017*montante;
	}
	
	else if(montante>2500 && montante <6250){
		comissao= 56 + 0.0066 * montante;
	}
	
	else if( montante >6250 && montante < 20000){
		comissao = 76 + 0.0034*montante;
	}
	
	else if( montante >20000 && montante <50000){
		comissao= 100 + 0.0022*montante;
	}
	
	else if(montante >50000 && montante <500000){
		comissao= 155+ 0.0011*montante;
	}
	
	else {
		comissao= 255+ 0.0009*montante;
	}
	
	if(comissao <39){
		comissao=39;
	}
	
	if( montante ==0){
		return 0;
	}
	printf("Comisão: EUR %.2f\n", comissao);
}while(montante!=0);

}
