//求Fibonacci数列第i项的值
#include <stdio.h>
long fibonacci (int n);
void main()
{
	int i=1;
	unsigned long result;
	do
	{
		printf("Please enter the number i:");
		scanf("%d",&i);
		result=fibonacci(i);
		printf("fibonacci[%d]=%lu\n",i,result);
	}while(i>0);
}
long fibonacci(int n)
{
	if(n==1||n==2)
		return n-1;
	else 
		return fibonacci(n-1)+fibonacci(n-2);
}
