#include <stdio.h>
int ordenada(int vec[], int size)
{
	for(int i=0; i<(size-1); i++)
	{
		if(vec[i] >vec[i+1])
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int vec[]={2,1,3,4,5};
	int size=4;
	printf("%d", ordena(vec, size));
}
	
