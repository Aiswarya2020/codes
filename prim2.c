/*PART B
 *
 * Program to print all prime numbers upto N 
 *
 */



#include<stdio.h>

int main()
{
	int n;
	int i,j;
	int count;
	scanf("%d",&n); 
	
	for( i = 1; i<=n ; ++i) 
	{
		count = 0; 
		for( j = 1; j<=n ; ++j )
		{
			if(i%j == 0)
			{
				++count;
			}
		}
		if(count == 2)
		{
			printf(" %d ", i);
		}
	}
	printf("\n");
	return 0;
}
		
