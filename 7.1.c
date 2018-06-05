//了解一维简单数组的输入和输出
#include <stdio.h>
void main()
{
	int a[5] ,i;
	printf("the first group:input 5 value,output 5 value\n");
	for(i=0;i<=4;i++)
	{
		scanf ("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		printf("a[%d] is %d\n",i,a[i]);
	}
	printf("--------------------------------------------\n");
}
