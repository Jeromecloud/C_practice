//求sinx的值
#include <stdio.h>
#include <math.h>
int main()
{
	double s,t,x;
	int n=1;
	printf("plese input a integer\n");
	scanf("%lf",&x);
	s=0;
	t=x;
	do{
		s=s+t;
		n=n+2;
		t=t*(-x*x)/(n*(n-1));
		printf("t=%12.10lf\n",t);//观察每一项的值
	}while(fabs(t)>=1e-7);
	printf("the result is sin(%5.2lf)=%12.10lf",x,s);
	return 0;
}