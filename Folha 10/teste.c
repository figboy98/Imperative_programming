#include <stdlib.h>
#include <stdio.h>
int main()
{
	int i=5;
	int *p;
	p=&i;

	//scanf("%d", p);
	printf("%p", *p);

}
