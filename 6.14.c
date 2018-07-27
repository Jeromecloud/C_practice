//从键盘输入整型数，反向将其输出
#include <stdio.h>
int reverseDi(int n);
void main()
{
	int n,reverse;
	printf("Please enter an inerger number\n");
	scanf("%d",&n);
	reverse=reverseDi(n);
	printf("the reverse is %d",reverse);
}
int reverseDi(int n)
{
	int reverse=0;
	if (n<10)
		return n;
	else
	{while(n>=10) 
		{
			reverse=reverse*10+n%10;//取n的个位数生成反向数
			n=n/10;					//修改n的值，去掉n的个位数，然后循环
		}
		reverse=reverse*10+n;
	}
		return reverse;
}