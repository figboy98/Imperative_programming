// 1.3

#include <stdio.h>
int main(){
int L=0, H=0, W=0, volume=0;

printf("Largura:?"); scanf("%d", &L);

printf("Altura:?"); scanf("%d", &H);

printf("Largura:="); scanf("%d", &W);

volume=L*H*W;
printf("Volume=%d cm³\n", volume);

return 0;
}
