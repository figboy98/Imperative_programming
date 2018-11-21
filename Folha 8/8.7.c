#include <stdio.h>
#include <string.h>
void inserir(char str[], char ch){
	int i= strlen(str);
	int j=i-1;
	
	while(j>=0 && v[j] >ch)
	{
		v[j+1]= v[j];
		j=j-1;
	}
	v[j+1]=x;
}
