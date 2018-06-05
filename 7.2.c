//一维数组的初始化
#include <stdio.h>
void main()
{
	int a[6]={0,1,2},i;
	double b[6]={0.0,1.1,2.2};
	char ch[6]={'a','b','c'};
	printf("整型数组元素的值：\n");
	for(i=0;i<6;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	printf("\n");
	printf("浮点型数组元素的值：\n");
	for(i=0;i<6;i++)
	{
		printf("b[%d]=%f\n",i,b[i]);
	}
	printf("\n");
	printf("字符型数组元素的值：\n");
	for(i=0;i<6;i++)
	{
		printf("ch[%d]=%c\n",i,ch[i]);
	}
	printf("\n");
}