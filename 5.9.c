//用do while 语句实现简单几何级数的求和
#include <stdio.h>
int main()
{
	int i=1,sum=0;
	do{
		sum=i+sum;
		i++;
	}while(i<=100);
	printf("sum=%d\n",sum);
	return 0;
}