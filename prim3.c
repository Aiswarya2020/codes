/*PART C 
 *
 * Program to print all Prime Factors of a number
 *
 */

#include<stdio.h>

int main()
{
	int n,i,j;
	int count;

	scanf("%d",&n); 
	
	for( i = 1 ; i<=n ; ++i)
	{
		if(n%i == 0) /* true if 'i' is a factor  */
		{
			count = 0;
			for( j = 1 ; j<=i ; ++j) 
			{
				if(i%j == 0)
				{
					++count;
				}
			}
			if( count == 2 ) /* 'i' is a prime factor */
			{
				printf(" %d " , i);
			}
		}
	}
	printf("\n");

	

	return 0;
}
	
