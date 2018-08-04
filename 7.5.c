//将数组下标为m的元素开始的连续n个元素和数组前m个元素交换位置
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
void move(int m,int n,int t[]);					//函数声明
void main()
{
	int m,n,i,a[N];
	srand(time(NULL));
	//随机生成数组元素
	for(i=0;i<N;i++)
	{
		a[i]=rand()%100;
	}
	printf("数组元素：\n");
	for(i=0;i<N;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	//输入移动的m&n
	printf("请输入需要移动的数据开始位置：\n");
	scanf("%d",&m);
	printf("请输入需要移动的数据范围：\n");
	scanf("%d",&n);
	move(m,n,a);
	printf("移动后的数组：\n");
	for(i=0;i<N;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
void move(int m,int n,int t[])			//移动函数
{
	int temp[N];
	int i;
	//将要求数据移动到临时数组
	for(i=0;i<n;i++)
	{
		temp[i]=t[m+i];
	}
	//将数组元素后移
	for(i=0;i<m;i++)
	{
		t[(m+n-1)-i]=t[(m-1)-i];
	}
	//将数据移回
	for(i=0;i<n;i++)
	{
		t[i]=temp[i];
	}
}