#include <stdio.h>

void max_min(int vec[], int size, int *pmax, int*pmin)
{
	*pmax=vec[0];
	*pmin=0;
	int n=size;
	
	for(int i=0; i<n; i++)
	{
		if(vec[i] >= *pmax)
		{
			*pmax=vec[i];
		}
	}
	*pmin=*pmax;
	for(int j=0; j<n; j++)
	{
		if(vec[j] <= *pmin)
		{
			*pmin=vec[j];
		}
	}
}

int main()
{
	int vec[]={1,2,3,4,5,6,7};
	int size=7;
	int pmax, pmin;
	
	max_min(vec, size, &pmax, &pmin);
	
	printf(" max: %d\n", pmax);
	printf(" min: %d\n", pmin);
}
