//了解指向多个元素的指针的作用
#include <stdio.h>
void main()
{
	int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},};
	int (*t)[4],i,j;
	t=a;															//指向数组的首地址
	for(i=0;i<3;i++)										//用指针t输出数组元素
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",*(*(t+i)+j));
		}
	}
}