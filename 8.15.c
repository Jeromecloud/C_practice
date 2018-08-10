//求字符串的长度
#include <stdio.h>
#define N 81
//统计str所指字符串的长度
int getlength (char *str)
{
	char *p=str;
	while(*p!='\0')
	{
		if (*p!='\0')
			p++;
	}
	return p-str;                 //返回字符串的长度
}
void main()
{
	char word[N],*string=word;
	int length;
	printf("please enter strings:\n");
	gets(string);
	length=getlength(string);
	printf("the length of string is :%d\n",length);
}