#include <stdio.h>
#include <math.h>
void main()
{
	double a,b,c;
	double s,x1,x2;
	printf("please input  a ,b ,c\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	if (a==0)
		printf("sorry,you have a wrong number \n");
	else
	{
		s=b*b-4*a*c;
		if (s>0)
		{
			//计算两不相等实根
			x1=(-b+sqrt(s))/(2*a);
			x2=(-b-sqrt(s))/(2*a);
			printf("there are two different  real:\nx1=%5.2f,x2=%5.2f\n",x1,x2);
		}
		else  if (s==0)	
		{
			//计算两相等实根
			x1=x2=-b/(2*a);
			printf("there are two equal real:\nx1=x2=%5.2f\n",x1);
		}
		else
		{
			//计算两不相等共轭复根；
			s=-s;
			x1=-b/(2*a);
			x2=fabs(sqrt(s)/(2*a));
			printf("there are two different complex:\n");
			printf("x1=%5.2f+%5.2fi,x2=%5.2f-%5.2fi\n",x1,x2,x1,x2);
		} 
	}
}