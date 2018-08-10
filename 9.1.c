//了解结构成员的使用
#include <stdio.h>
#include <conio.h>
//定义学生成绩结构
struct score
{
	int math;
	int eng;
	int com;
};
//定义学生基本信息结构
struct stu
{
	char name[12];
	char sex;
	long stuclass;
	struct score sub;
};
void main()
{
	struct stu student1={"Na ming",'M',160243001,10,20,10};
	struct stu student2;
	student2=student1;
	student2.name[0]='H';
	student2.name[1]='u';
	student2.sex='W';
	student2.stuclass=160243002;
	student2.sub.math=11;
	printf("姓名\t性别\t学号\t\t数学成绩\t英语成绩\t计算机成绩\n");
	printf("%s\t%c\t%ld\t\t%d\t%d\t%d\n",student1.name,student1.sex,student1.stuclass,student1.sub.math,student1.sub.eng,student1.sub.com);
	printf("%s\t%c\t%ld\t\t%d\t%d\t%d\n",student2.name,student2.sex,student2.stuclass,student2.sub.math,student2.sub.eng,student2.sub.com);
}









