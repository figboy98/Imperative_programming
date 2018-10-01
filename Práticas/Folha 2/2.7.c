#include <stdio.h>
int main(){
	int a,b,c,maior=0;
	
	scanf("%d", &a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	if(a>=b){
		maior=a;
	}
	
	else{
		maior=b;
	}
	
	if(c>=maior){
		maior=c;
	}
	
printf("%d\n", maior);

return 0;

}
	
	
