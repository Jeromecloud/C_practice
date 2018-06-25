//循环从键盘输入整数，计算并输出数的个数、总和以及算术平均值，若输入了数字0，则不计入总数，以结束标志作为输入的结束
#include <stdio.h>
int main()
{
	int n,count,sum;
	sum=0;
	printf("please input integers:\n");
	
	while(n=getchar()!='\n')
	{
		if(n==0)
			continue;
		sum=n+sum;
		count++;
		
	}
	printf("个数=%d\n",count);
	printf("总和=%d\n",sum);
	printf("算术平均数=%d\n",sum/count);
	
	return 0;
}