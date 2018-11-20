#include <stdio.h>
int contar_maiores(int vec[], int size, int val)
{
	int cont=0;
	for(int i=0; i<size; i++)
	{
		if(vec[i]>val)
		{
			cont++;
		}
	}
	return cont;
}
	
int main()
{
	int vec[100];
	printf("Escreva os números:");
	int ch, i=0, size=0;
	int val;
	while((ch=getchar()) != '\n')
	{
		vec[i]=ch - '0';
		i++;
		size++;
	}
	
	printf("Escreva o valor:"); scanf("%d", &val);
	
	int resultado = contar_maiores(vec, size, val);
	printf("%d\n", resultado);
}
