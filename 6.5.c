//利用static变量保留每一次阶乘的值
#include <stdio.h>
long fac(int n)
{
	static int f=1;
	f*=n;
	return f;
}
void main()
{ 
	int i;
	for(i=1;i<6;i++)
	{
		printf("%d!=%ld\n",i,fac(i));
	}
}
/*
用递归函数求n！
long fac (int n)
{
long result;
if (n==0||n==1)
	result=1;
else 
	result=n*fac(n-1);
}
*/