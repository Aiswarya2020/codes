/*
 *
 * 5. Program to calculate the prime factors of a number
 *
 */

#include<stdio.h>
		
int main()
{
	int n, i, j, count;
	
	scanf("%d",&n);
	
	for( i = 1 ; i<=n ; ++i)
	{
		count = 0;
		for( j = 1; j<=n ; ++j)
		{
			if(i%j == 0)
				++count;
		}
		if(count == 2)
		{
			if( n%i == 0 )
			{
				printf(" %d ", i);
			}
		}
	}

	printf("\n");
	return 0;
}



