#include <stdio.h>
void ordena_selecao_decrescente(int vec[], int size)
{
	int i, j;
	int imax;
	for(i=0; i<size; i++)
	{
		imax=i;
		for(j=i+1; j<size; j++)
		{
			if(vec[j] > vec[imax])
			{
				imax=j;
			}
			int temp=vec[i];
			vec[i]=vec[imax];
			vec[imax]=temp;
		}
	}
}

int main()
{
	int vec[100];
	int size=0, aux;
	scanf("%d", &aux);

	for(int i=0; aux !=0; i++)
	{
		vec[i]=aux;
		size++;
		scanf("%d", &aux);

	}
	ordena_selecao_decrescente(vec, size);
	for(int i=0; i<size; i++)
	{
		printf("%d ", vec[i]);
	}
	printf("\n");
	return 0;
}
