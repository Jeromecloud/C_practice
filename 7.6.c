//二维数组元素的输入与输出
#include <stdio.h>
void main()
{
	int i,j;
	int a[3][4];
	printf("Please input the value :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the value of array is :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("a[%d][%d]=%d\t",i,j,a[i][j]);
		}
		printf("\n");
	}
}