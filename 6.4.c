//了解变量的作用域
#include <stdio.h>
void a(void);
void b(void);
void c(void);
int x=1;
int main()
{
	int x=5;
	printf("x in main is %d\n",x);
	{
		int x=7;
		printf("x in inner scope of main is %d\n",x);
	}
	printf("x in main is %d\n",x);
	a();
	b();
	c();
	a();
	b();
	c();
	printf("\nx in main is %d\n",x);
	return 0;
}
void a(void)
{
		int x =25; 
		printf("\nThis is function a:\n");
		printf("x in a is :%d\n",x);
		++x;
		printf("++x in a is :%d\n",x);
}
void b(void)
{
		static int x =50; 
		printf("\nThis is function b:\n");
		printf("static x in b is :%d\n",x);
		++x;
		printf("static ++x in b is :%d\n",x);//此处的值因为static未释放上次x的值
}
void c(void)
{
		int x =25; 
		printf("\nThis is function c:\n");
		printf("global x in c is :%d\n",x);
		++x;
		printf("global ++x in c is :%d\n",x);
}

