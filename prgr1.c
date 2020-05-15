
/*
1. Program to calculate the factorial of a number
*/



#include<stdio.h>


int main()
{
	int n; 
	int i;
	long int fact = 1;
	scanf("%d",&n);

	for( i=1 ; i<=n ; ++i )
		fact = i * fact;  
	
	printf(" factorial is %lu \n",fact);

	return 0;
}

