//小学生两位数的加法、减法和乘法运算
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
void main()
{
		int i,right=0,error=0;
		int a,b,op,result,input;
		char ops;
		srand (time(NULL));
		printf("please answer:\n");
		for (i=1;i<=N;i++)
		{
			printf("the%-2d:",i);
			a=rand()%100;
			b=rand()%100;
			op=rand()%3;
			switch(op)
			{
				case 0:ops='+';result=a+b;break;
				case 1:ops='-';if (a>=b)result=a-b;else result=b-a;break;
				case 2:ops='*';result=a*b;break;
				default:break;
			}
		if (a<b&& ops=='-')
			printf("%d %c %d=",b,ops,a);
		else 
			printf("%d %c %d=",a,ops,b);
		scanf("%d",&input);
		if (result==input)
		{
			printf("right\n");
			right=right+1;
		}
		else
		{
			printf("wrong\n");
			error=error+1;
		}
		}
		printf("the result is right=%d,wrong=%d\n",right,error);
}