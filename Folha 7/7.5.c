#include <stdio.h>
#include <ctype.h>
#include <string.h>

int forte(char pass[]){
	int upper=0, lower=0, digit=0;
	if(strlen(pass) <6){
		return 0;
	}
	
	for(int i=0; i<strlen(pass); i++)
	{
		if(isupper(pass[i]))
		{
			upper++;
		}
		
		if(islower(pass[i]))
		{
			lower++;
		}
		if(isdigit(pass[i]))
		{
			digit++;
		}
	}
	
	if(upper >0 && lower >0 && digit>0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


void main(){
	char pass[20];
	
	scanf(" %s", pass);
	printf("%d", forte(pass));
	
}
	
