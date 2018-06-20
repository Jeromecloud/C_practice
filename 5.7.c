//统计从键盘输入的字符个数
#include <stdio.h>

int main()
{
	char ch;
	int count=0;
	while((ch=getchar())!=EOF)
	{
		//printf("%c\n",ch);
		count+=1;
	}
	printf("%d\n",count);
	return 0;
}