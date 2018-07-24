//编写一个程序，依次输入5个学生的7门课程的成绩，每输入一个学生的7门课程成绩后，
//立即统计并输出该学生的总分和平均分
#include <stdio.h>
int main()
{
	int i,n;
	float sum,score;
	for(n=1;n<6;n++)
	{
	printf("please input the NO %d student's score:\n",n);
	sum=0;													//初始化sum的值
		for(i=1;i<8;i++)
		{
			scanf("%f",&score);
			sum+=score;
		}
	printf("the NO %d student's sum=%.2f,ave=%.2f\n",n,sum,sum/7);
	}
	return 0;
}