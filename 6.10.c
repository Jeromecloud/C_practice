//了解带参数的宏定义的作用
#include <stdio.h>
#define F(a) (a)*b
void main()
{
	int x,y,b,z;
	printf("please enter the value of x,y:\n");
	scanf("%d%d",&x,&y);
	b=x+y;
	z=F(x+y);
	printf("b=%d\nF(x+y)=%d\n",b,z);
}