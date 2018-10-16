#include <stdio.h>
int main(){

    float valor,x0, xn, x1;

    printf("Escreva o valor para o qual quer calcular a raiz quadrada: "); scanf("%f", &valor);
    
    x0=valor/2;  //primeira aproximação
    
    x1=((valor/x0) + x0) *(1.0/2.0); //segunda aproximação
    
    
    for(int i=0; i<9; i++){ 
        
        xn=((1.0/2.0)*(x1+ (valor/x1)));  //usar o valor anterior para obter a seguinte aproximação
        x1=xn;                        // copiar o valor da aproximação obtida para se poder usar na aproximação seguinte
    }
    
    printf("A raiz quadrade é igual a :%f\n", x1);
    
}
