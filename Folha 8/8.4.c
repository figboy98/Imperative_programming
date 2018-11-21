#include <stdio.h>

void ordena_insercao(int vec[], int size)
{
	int i, j,x;
	for(int i=1; i<size; i++)
	{
		x=vec[i];
		j=i-1;
		while( j>=0 && vec[j]> x){
			vec[j+1] =vec[j];
			j--;
		}
		vec[j+1]=x;
	}
}
void ordena_selecao(int vec[], int size)
{
	int i, j;
	int imin;
	for(i=0; i<size; i++)
	{
		imin=i;
		for(j=i+1; j<size; j++)
		{
			if(vec[j] < vec[imin])
			{
				imin=j;
			}
			if(imin != i)
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
	//ordena_insercao(vec, size);
	ordena_selecao(vec, size);
	for(int i=0; i<size; i++)
	{
		printf("%d ", vec[i]);
	}
	printf("\n");
	return 0;
} 
	
			 
	
