//了解指针与数组的关系
#include <stdio.h>
int main()
{
	int a[2]={1,2},i,*pa;
	char ch[2]={'a','b'},*pc;
	pa=a;												//指针pa指向数组a的首地址
	pc=&ch[0];											//指针pc指向数组ch的首地址
	printf("1:-------------------------\n");			//输出a和ch数组的值
	for(i=0;i<5;i++)
	{
		printf("a[%d]=%d,ch[%d]=%c\n",i,a[i],i,ch[i]);
	}
	printf("2:-------------------------\n");			//输出指针指向数组元素的值
	for(i=0;i<5;i++)
	{
		printf("*(pa+%d)=%d,pc[%d]=%c\n",i,*(pa+i),i,pc[i]);
	}
	printf("3:-------------------------\n");			//输出数组a和ch的地址
	for(i=0;i<5;i++)
	{
		printf("*a(%d)=%ld,*ch[%d]=%ld\n",i,pa+i,i,ch+i);
	}
	return 0;
}