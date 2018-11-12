#include <stdio.h>
#include <string.h>

int filtrar_positivos(int vec[], int size)
{
	int k=0;
	int val;
	for(int i=0; i<size; i++)
	{
		val=vec[i];
		
		if(val >0)
		{
			vec[k++]=val;
		}
		
	
return k;
}
			

		
