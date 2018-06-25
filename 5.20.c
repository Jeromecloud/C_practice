//买鸡问题：公鸡每只5元，母鸡每只3元，小鸡每元3只，现用100元买100只鸡，问各买多少只鸡
#include <stdio.h>
int main()
{
	int i,j,k;
	for(i=0;i*5<=100;i++)
	{
		for(j=0;j*3<=100;j++)
		{
			for(k=0;k/3<=100;k+=3)
				if(i+j+k==100&&i*5+j*3+k/3==100)
					printf("Cock--%d\tHen--%d\tChicken--%d\n",i,j,k);
		}
	}
	return 0;
}