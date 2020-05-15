/*
 *PART A
 * Program to check if a number is a Prime Number or Not
 *
 * Please LIKE AND SUBSCRIBE to CodeMalayalam ...Thankyou!
 */

#include<stdio.h>

int main()
{
	int n, i;
	int count = 0;

	scanf("%d",&n);

	for( i=1; i<=n; ++i)
	{
		if(n%i == 0) /* if  i is a factor, then incrememnt count  */
		{
			++count;
		}
	}

	if(count == 2) /* prime numbers have exactly 2 factors */
		printf(" %d is a PRIME NUMBER \n",n);
	else
		printf(" %d is not a PRIME NUMBER\n",n);

	return 0;
}
