//了解字符串比较函数的作用
#include <stdio.h>
#include <string.h>
void main()
{
	char name1[10],name2[10];
	int k;
	printf("please input name1:\n");
	gets(name1);
	printf("please input name2:\n");
	gets(name2);
	k=strcmp(name1,name2);							//比较两个字符串是否相同
	printf("k=%d\n",k);
	if(k>0)
		printf("big");
	else if(k<0)
		printf("small");
	else
		printf("equal");
	
}