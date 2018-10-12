
int mediana(int a, int b, int c){
	int max,min;
	int soma=a+b+c;
	
	if(a >=b){ 
		max=a;
		min=b;
	}
	else if(b>=a){
		max=b;
		min=a;
	}

	if(c>=max){
		max=c;
	}
	
	if(c <=min){
		min=c;
	}
	
	int med=soma-max-min;
	
	return med;
}

