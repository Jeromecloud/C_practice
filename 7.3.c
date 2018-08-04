//一维数组在程序中的使用
#include <stdio.h>
void main()
{
	int i,a[5]={1,2,3,4,5};
	printf("输出数组元素的正确值\n");
	for (i=0;i<5;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	printf("输出超出下标的元素的值\n");
	for (i=0;i<10;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	printf("改变数组元素的值\n");
	printf("a[0]=%d\n",a[0]=(a[1]+a[2]));
}