//输出Fibonacci数列前20项的值
#include <stdio.h>
void main()
{
	unsigned long FBNC[20];
	int i;
	FBNC[0]=0;
	FBNC[1]=1;
	for(i=2;i<20;i++)
	{
		FBNC[i]=FBNC[i-1]+FBNC[i-2];
	}
	printf("Fibonacci数列前20项的值\n");
	for(i=0;i<20;i++)
	{
		if (i%5==0)
			printf("\n");
		printf("FBNC[%d]=%lu\t",i,FBNC[i]);
	}
}