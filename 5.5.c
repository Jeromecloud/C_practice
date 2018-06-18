//while语句初使用
#include <stdio.h>
void main()
{
	int i=1,sum=0;
	while(i<=100)
	{
		sum=sum+i;
		i++;
	}
	printf("1+2+3+...+100=%d",sum);
}