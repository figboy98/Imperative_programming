#include <stdio.h>
int main(){
	int a,b,c,maior=0;
	
	scanf("%d", &a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	if(a>=b && a>=c){
		maior=a;
	}
	
	if(b>=a && b>=c){
		maior=b;
	}
	if(c>=a && c>=b){
		maior=c;
	}
	printf("%d\n",maior);
	
	return 0;
}
