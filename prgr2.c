
/*
 *2. Program to calculate the sum of digits of a number
 */


#include<stdio.h>

int main()
{
	int n;
	int sum = 0;
 	int rem;
	scanf("%d", &n);  /* input from user */
	
	while(n)  /*  loop executes only if n is non-zero  */
	{
		rem = n % 10;   /*  gets the unit digit */
		sum = sum + rem;  /* adds the unit digit from previous step to your final sum  */
		n = n/10;       /*  shifts the decimal place to the left so that in the next step
				    we get the next units place */
	}

	printf("%d\n",sum);

	return 0;
}

