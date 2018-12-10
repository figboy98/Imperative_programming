#include <stdio.h>

int mdc(int num, int denom)
{
	while(num != denom)
	{
		if(num > denom)
		{
			num= num - denom;
		}
		else
		{
			denom= denom -num;
		}
	}
	return num;
}

 
void reduzir(int *pnum, int *pdenom)
{
	int num=*pnum;
	int denom=*pdenom;
	
	int div= mdc(num, denom);
	
	

	*pnum = *pnum/div;
	
	*pdenom= *pdenom/div; 
}

int main()
{
	int pnum=5;
	
	int pdenom=10;
	
	
	reduzir(&pnum,&pdenom);
	
	printf( "%d/%d\n", pnum, pdenom);
}

	
