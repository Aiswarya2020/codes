/*
* To print the following pattern : 
*
*           *
*         * *
*       * * *
*     * * * *
*   * * * * *
*
* PLEASE SUBSCRIBE TO CODEMALAYALAM YOUTUBE CHANNEL
*/


#include<stdio.h>

int main()
{
	int i, j, k, n;
	scanf("%d",&n);
		
	for( i = 1 ; i <= n ; ++i)
	{
		for( j = i ; j < n ; ++j) /* inner loop for space */
		{
			printf("   ");
		}
		for( k = 1 ; k <= i ; ++k) /* inner loop for '*' */
		{
			printf(" * ");
		}
		printf("\n");	

	}
	return 0;
}
















