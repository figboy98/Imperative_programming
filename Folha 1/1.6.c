#include <stdio.h>
int main(){
	float L=0, H=0, W=0, volume=0;

printf("Largura:?"); scanf("%f", &L);

printf("Altura:?"); scanf("%f", &H);

printf("Largura:="); scanf("%f", &W);

volume=L*H*W;
printf("Volume=%f cm³\n", volume);

return 0;
}

