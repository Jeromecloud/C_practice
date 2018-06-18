//﻿从键盘输入一个正整数，计算n！
#include <stdio.h>
void main()
{
	int i,n;
	long s;
	printf("please enter a integer:\n");
	scanf("%d",&n);
	getchar();
	if(n>=0)
	{
		s=1;
		i=1;
		while(i<=n)
		{
			s=s*i;
			i=i++;
		}
		printf("%d!=%ld\n",n,s);
	}
	else 
	printf ("you have input a wrong value");
}