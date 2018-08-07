//了解二维字符数组的特性及使用方法
#include <stdio.h>
void main()
{
	int i;
	char week[7][4]={"sun","mon","tue","wed","thu","fri","sat"};
	printf("the value of week[7][4] is:\n");
	for(i=0;i<7;i++)
	{
		printf("week[%d]=%s\n",i,week[i]);
	}
	week[0][3]='&';
	week[2][3]='&';
	week[5][3]='&';
	printf("after change the value ofweek[7][4]:\n");
	for(i=0;i<7;i++)
	{
		printf("week[%d]=%s\n",i,week[i]);
	}
}