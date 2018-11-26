#include <stdio.h>

void  quicksort_rec(int vec[], int l, int u)
{
	int m;
	ĩf(l>=u)
	{
		return; //caso base
	}
	m=partition(vec, l,u);
	quicksort_rec(vec, l, u);
	quicksort_rec(vec[m+1,u);
}
int partition(int vec[], int l, int u)
{
	int num1= v[l];
	int num2= v[u];
	int num3= v[(l+u)/2);
	int soma=num1+num2+num3;
	int max,min;
	
	if(num1 >=num2) max=num1, min=num2;
	
	else if(num2 >= num1) max=num2, min=num1;
	
	if(num3 >=max) max=num3;
	
	if(num3 <=min) min=num3;
	
	int med=soma-max-min;
	
	int i,m,temp;
	m=med;
	for(i =med+1; i<=u; i++)
	{
		if(vec[i] <vec[j])
		{
			m++;
			temp=vec[i];
			vec[i] =vec[m];
			vec[m]=temp;
		}
	}
	temp=vec[j];
	vec[j]=vec[m];
	vec[m]=temp;
	return m;
}

int main()
{
	int vec[]={9,8,7,6,5,4,3,2,1};
	quicksort_rec(vec, vec[0], vec[10]);
	fputs(vec,stdout);
}
	
	
{
	
