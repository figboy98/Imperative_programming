#include <stdio.h>
int cal(char str[])
{
	int a= str[0] - '0';
	int b= str[2] - '0';
	 
	switch (str[1]){
		case '+':
			return a+b;
			break;
		case '-':
			return a-b;
			break;
		case '*':
			return a*b;
			break;
		default:
			break;
		}
	
	
	
}

int main()
{
	char str[4];
	scanf("%s", str);
	int resultado=cal(str);
	printf("%d\n", resultado);
	return 0;
}
