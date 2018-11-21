#include <stdio.h>
void ordena_selecao(int vec[], int size)
{
	int i,j;
	
	for(i=0; i<size; i++)
	{
		int imin=i;
		
		for(j=i+1; j<size; j++)
		{
			if(vec[j] < vec[imin])
			{
				imin=j;
			}
			if(imin !=i)
			{
			int temp=vec[i];
			vec[i]=vec[imin];
			vec[imin]=temp;
		}
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
	ordena_selecao(vec, size);
	

	
	printf("O segundo valor mais pequeno é:%d \n", vec[1]);
	return 0;
}
