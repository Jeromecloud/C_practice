//创建字符串链表并将其输出
#include <stdio.h>
#include <stdlib.h>
struct string 
{
	char ch;
	struct string *nextPtr;
};
struct string *creat(struct string *h);
void print_string(struct string *h);
int num=0;
void main()
{
	struct string *head;																				//定义表头指针
	head=NULL;																							//创建一个空表
	printf("请输入一行字符（输入回车时程序结束）:\n");
	head=creat(head);																					//调用函数创建链表
	print_string(head);																					//调用函数输出链表内容
	printf("\n输入的字符个数为：%d\n",num);
}
struct string *creat(struct string *h)
{
	struct string *p1,*p2;
	p1=p2=(struct string*)malloc(sizeof(struct string));							//申请新结点
	if (p2!=NULL)
	{
		scanf("%c",&p2->ch);																		//输入结点的值
		p2->nextPtr=NULL;																			//新结点指针成员的值赋为空
	}
	while (p2->ch!='\n')
	{
		num++;																								//字符个数加1
		if(h==NULL)
			h=p2;																								//若为空表，接入表头
		else
			p1->nextPtr=p2;																			//若为非空表，接入表尾
		p1=p2;
		p2=(struct string*)malloc(sizeof(struct string));								//申请下一结点
		if(p2!=NULL)
		{
			scanf("%c",&p2->ch);																	//输入结点的值
			p2->nextPtr=NULL;
		}
	}
	return h;
}
void print_string(struct string *h)
{
	struct string *temp;
	temp=h;																									//获取链表的头指针
	while(temp!=NULL)
	{
		printf("%-2c",temp->ch);																	//输出链表结点的值
		temp=temp->nextPtr;
	}
}