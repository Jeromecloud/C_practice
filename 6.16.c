//汉诺塔问题递归求解
#include <stdio.h>
//将n个盘子从towerA借助towerB移动到towerC上
void HanoTower(unsigned n,char tower_A,char tower_B,char tower_C);
//移动tower1塔上的一个盘子到tower2塔上
void move(char tower1,char tower2);
int steps=0;
void main()
{
	unsigned n;
	printf("plese enter the number of disk :\n");
	scanf("%d",&n);
	printf("the steps of move\n");
	HanoTower(n,'A','B','C');   //调用函数，将n个盘子从A塔借助B塔移动到C塔
	printf("the total steps are: %d\n",steps);
}
void HanoTower(unsigned n,char a,char b,char c)
{
	steps++;
	if (n==1)
		move(a,c);
	else 
	{
		HanoTower(n-1,a,c,b);
		move(a,c);
		HanoTower(n-1,b,a,c);	
	}
}
void move(char tower1,char tower2)
{
	printf("form  \t%c--> \t%c\n",tower1,tower2);
}