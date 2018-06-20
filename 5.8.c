//成绩录入分类统计
#include <stdio.h>
int main()
{
	int aC=0,bC=0,cC=0,dC=0,eC=0;
	int grade,total=0,errTotal=0;
	printf("please input grade\n");
	while((grade=getchar())!=EOF)
	{
		switch(grade)
		{
		case 'a':aC+=1;total+=1;break;
		case 'b':bC+=1;total+=1;break;
		case 'c':cC+=1;total+=1;break;
		case 'd':dC+=1;total+=1;break;
		case 'e':eC+=1;total+=1;break;
		case '\n': 
		case ' ': break;
		default:printf("error enter,please try again\n");errTotal+=1;break;
		}
	}
	printf("total number=%d,error=%d\n",total,errTotal);
	printf("a\tb\tc\td\te\t\n");
	printf("%d\t%d\t%d\t%d\t%d\t\n",aC,bC,cC,dC,eC);
	return 0;
} 