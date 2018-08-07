//了解字符指针的作用
#include <stdio.h>
#include <conio.h>
void main()
{
	char ch[30]="this is a test of point",*p=ch;
	int i;
	printf("通过指针输出数组元素：\n");
	printf("1.整体输出：\n%s\n",p);
	printf("2.单个元素输出：\n");
	while(*p!='\0')
	{
		putch(*p);
		p++;
	}
	printf("\n");
	printf("3.单个元素输出：\n");
	p=ch;
	for(i=0;i<30;i++)
	{
		printf("%c",p[i]);
	}
	printf("\n");
}