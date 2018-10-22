#include <stdio.h>
double serie_log();
int main(){
	int x;
	double n;
	
	serie_log(double x, int n);
}

double serie_log(double x, int n){
	
	double potencias=1,  log=0, frac=0;
	
	for(int i=1; i<=n; ++i){
		
		potencias*=x;
		frac=(potencias/i);
	
		if(i%2==0){
			frac*=-1;
		}
	
		log+=frac;
	}
	return log;
}
			


