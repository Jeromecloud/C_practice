//求a的b次幂，要求a与b的值均为大于零的整数
//非递归算法
#include <stdio.h>
long exp(int a,int b);
void main()
{
	int a,b;
	printf("Please input a and b:");
	scanf("%d%d",&a,&b);
	if(a>0&&b>0)
		printf("the result is %ld",exp(a,b));
	else
		printf("WRONG!!");
}
long exp(int a,int b)
{
	long result = 1;
	while (b>0)
	{
		result*=a;
		b--;
	}	
	return result;
}
#if(o)
	//递归算法
	long exp2(int a,int b)
	{
		if(b==0)
			return 1;
		if(b==1)
			return a;
		else 
			return a*exp2(a,b-1);
	}
#endif