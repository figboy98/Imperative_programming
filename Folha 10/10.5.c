#include <stdio.h>

int *mdc(int *num, int *denom)
{
	while(*num != *denom)
	{
		if(*num > *denom)
		{
			*num= *num- *denom;
		}
		else
		{
			*denom= *denom -*num;
		}
	}
	return num;
}

 
void reduzir(int *pnum, int *pdenom)
{
	int *div= mdc(pnum, pdenom);
	
	
	printf("%d\n", *pdenom);

	*pnum = (*pnum/(*div));
	
	printf("%d\n", *pnum);
	
	*pdenom= *pdenom/(*div);
}

int main()
{
	int pnum=10;
	
	int pdenom=5;
	
	//printf("%d/%d = ", pnum, pdenom);
	
	reduzir(&pnum, &pdenom);
	
	//printf( "%d/%d\n", pnum, pdenom);
}

	
