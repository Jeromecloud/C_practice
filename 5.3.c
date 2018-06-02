//ex5.3用*打印几何图案
#include <stdio.h>
void main()
{
	int i,j,m,n;
	printf("Please input value of m and n\n");
	scanf("%d%d",&m,&n);
	if (m>0&&n>0)
	{
		for (i=1;i<=m;i++)
		{
			for (j=1;j<=n;j++)
				printf("*");
			printf("\n");
		}
	}
	else 
		printf("sorry ,you ernter a wrong number\n");
}