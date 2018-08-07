/*编写程序，利用随机函数生成20个50以内大小的整数，存入到一个数组中，从键盘输入一个整数
作为关键字，用线性查找方法在数组中查找，如果输入的数在数组中存在，则输出该数在数组中的
下标值；否则输出-1，表示该数在数组中不存在
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int Thread(int array[],int keyword)//线性查找算法
{
	int i,subscript;
	for(i=0;i<20;i++)
	{
		if(keyword==array[i])
			subscript=i;
		return subscript;
	}
	return -1; 
}
void main()
{
	int i,key,sub;
	int array[20];
	srand(time(NULL));//生成随机数
	for(i=0;i<20;i++)
	{
		array[i]=rand()%50;
	}
	printf("Please input the keyword:\n");
	scanf("%d",&key);
	sub=Thread(array,key);//调用函数
	if (sub==-1)
		printf("yes\n");
	else
		printf("no\n");
}