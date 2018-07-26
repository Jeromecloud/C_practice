// 判断一个数是否是素数
//试除法：设被测试的自然数为x，使用此方法者需逐一测试2与 根号x之间的整数，确保它们无一能整除x。
#include <stdio.h>
#include <math.h>
void main()
{
int i,x,a,yes;
i=2;
printf("please input an interger number:");
scanf("%d",&x);
a=(int)sqrt((double)x);
yes=1;
while(yes&&i<=a)
{
	if(x%i==0)
		yes=0;
	else 
		i++;
}
printf("%d\n",x);
if(yes)
	printf("yes\n");
else 
	printf("NO\n");
}

















