//了解指针数组的使用
#include <stdio.h>
void main()
{
	static char ch[3][4]={"ABC","DEF","HIJK"};
	char *pc[3]={ch[0],ch[1],ch[2]};
	
	int i,j;
	
	static int a[3][4]={{11,22,33,44},{55,66,77,88},{99,111,222,333}};
	int *p[3]={a[0],a[1],a[2]};
	
	printf("1直接输出数组元素字符ch[i][j]:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("ch[%d][%d]=%c\t",i,j,ch[i][j]);
		}
		printf("\n");
	}
	
	printf("2.用指针数组输出第2行的字符串:\n");
	printf("ch[1]=%s\t\n",pc[1]);
	
	printf("3.用指针数组输出数组元素（字符）pc[i][j]:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("ch[%d][%d]=%c\t",i,j,pc[i][j]);
		}
		printf("\n");
	}
	
	printf("4.用指针数组输出第2行的数组元素（整型数）:\n");
	for(i=0;i<4;i++)
	{
		printf("a[1][%d]=%d\t",i,p[1][i]);
	}
	printf("\n");
	
	printf("5.用指针数组输出数组元素（整型数）:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("a[%d][%d]=%d\t",i,j,p[i][j]);
		}
		printf("\n");
	}
}