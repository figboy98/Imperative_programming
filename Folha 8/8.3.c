#include <stdio.h>
int desordem(int vec[], int size)
{
	int cont=0;
	for(int i=0; i<size; i++)
	{
		if(vec[i] > vec[i+1])
		{
			cont++;
		}
	}
	return cont;
}
int main()
{
	int vec[100],size=0;
	int i=0;
	int aux;
	
	printf("Escreva os números (para terminar digite -1):\n");
	scanf("%d", &aux);
	
	for(int i=0; aux !=-1; i++)
	{
		vec[i]=aux;
		size++;
		scanf("%d", &aux);
	}
	
	printf("%d\n", desordem(vec, size));
	return 0;
}
 
