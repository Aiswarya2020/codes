
/*
 *
 *3. Program to reverse a number
 *
 */

#include<stdio.h>

int main()  
{
	int n, rem;
	int rev = 0;
	
	scanf("%d",&n);	

	while(n) 
	{
		rem = n % 10;
	       	rev = rev * 10 + rem;
		n/=10; // n = n/10;
	}

	printf("%d\n",rev);

	return 0;
}
