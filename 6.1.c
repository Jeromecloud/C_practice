//自定义函数，求两整数绝对值的和
#include <stdio.h>
int abs_sum(int m,int n);			//函数声明
int main()
{
	int x,y,z;
	scanf("%d%d",&x,&y);
	z=abs_sum(x,y);					//函数调用
	printf("the result is %d",z);
	return 0;
}
int abs_sum(int m,int n)			//函数定义
{
	if(m<0)
		m=-m;
	if(n<0)
		n=-n;
	return m+n;
}