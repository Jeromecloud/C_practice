//统计从键盘输入的字符个数及行数
#include <stdio.h>
#include <string.h>
#define Max 100
#define End '!'
void wordInput(char str[]);
void countWords(char str[]); 
void wordOutput(int lines,int number);
int lines=0,number=0;
void main()
{
    char strings [Max+1];
	wordInput(strings);							//调用函数将输入的字符保存到数组中
	countWords(strings);							//调用函数统计字符的个数及行数
	wordOutput(lines,number);				//调用函数将统计结果输出
}
void wordInput(char str[])						//将输入的字符保存到数组中
{
	char c;
	int i=0;
	c=getchar();
	while(i<Max-1&&c!=End)
	{
		str[i]=c;
		c=getchar();
		i++;
	}
	if (str[i-1]=='\n')							//对数组的最后一个元素的值进行处理
		str[i]='\0';
	else 
	{
		str[i]='\n';
		str[i+1]='\0';
	}
}
void countWords(char str[])				//统计字符的个数及行数
{
	int i=0;
	char c;
	c=str[i];
	while(c!='\0')
	{
		if(c=='\n')
			lines++;
		else 
			number++;
		i++;
		c=str[i];
	}
}
void wordOutput(int lines,int number)	//将统计结果输出
{
	printf("the lines of string =%d\n",lines);
	printf("the words of string =%d\n",number);
}
	
