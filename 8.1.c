//了解指针和变量的关系
#include <stdio.h>
int main()
{
	int x=10,*p;
	float y=234.5,*pf;
	p=&x;
	pf=&y;
	printf("x=%d\t\ty=%f\n",x,y);//输出变量的值
	printf("p=%lu\t\tf=%lu\n",p,pf);//按十进制输出变量的地址
	printf("p=%p\t\tf=%p\n",p,pf);//按十六进制输出变量的地址
	
	//改变指针变量所指的值
	*p=*p+10;
	*pf=*pf*10;
	printf("-----------------------------------------\n");
	printf("x=%d\t\ty=%f\n",x,y);
	printf("p=%lu\t\tf=%lu\n",p,pf);//按十进制输出变量的地址
	printf("p=%p\t\tf=%p\n",p,pf);//按十六进制输出变量的地址
	return 0;
}