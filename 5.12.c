//输出在50~100中不能被3整除的数
#include <stdio.h>
int main()
{
	int i=50;
	for(i;i<=100;i++)
	{
		if(i%3!=0)
		{
			printf("%d\t",i);
		}
		//continue;
	}
	return 0;
}