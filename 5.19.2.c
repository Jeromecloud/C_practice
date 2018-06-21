#include <stdio.h>
int main()
{
	int a,b,r,sa,sb;
	printf("input two integer numbers:\n");
	scanf("%d%d",&a,&b);
	sa=a; sb=b;
	if(a<b)
	{
		r=a;
		a=b;
		b=r;
	}
	r=a%b;
	while(r!=0)
	{
		a=b;
		b=r;
		r=a%b; 
	}
	printf("the greatest common divisor:%d\n",b);
	printf("the lowest multiple:%d\n",sa*sb/b);
	return 0;
}