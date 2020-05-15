/*
 * 4. Program to check if a number is a strong number or not.
 * PLEASE LIKE AND SUBSCRIBE TO CodeMalayalam YouTube Channel
 * Thank you ! 
 */


#include<stdio.h>
 
long int fact(int);  /* function declaration of the factorial function  */

int main()
{
	int n, num, value;						
	long int sum = 0;
	
	scanf("%d",&n);
	
	value = n;


	while(value)
	{
		num = value % 10;
		sum+= fact(num);  /* sum = sum + fact(num) where fact(num) is your func. call. Here the num inside fact(num) is known
				   * as the ACTUAL PARAMETER (interview question)  */
		value/=10;             /* value = value/10  */
	}
	
	if(sum == n)
		printf("%d is a strong number \n",n);
	else
		printf("%d is not a strong number \n",n);
	
	return 0;
}

long int fact (int num)  /* function definition ... the 'int num' in 'long int fact(int num)' is known as the FORMAL PARAMETER (interview question) */
{
	int i = 1;
	long int f = 1;
	for ( ; i <= num ; ++i)  /* for ( initialize (optional) ; test condi ; updation (optional) )   */
		f*= i; 	/* f = f * i */
	
	return f;
}

