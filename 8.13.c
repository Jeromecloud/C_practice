//对一组英文单词进行按字典排序
#include <stdio.h>
#include <string.h>
void sort(char *words[],int n);
void main()
{
	char *wString[]={"implemengtation","language","design","fortan","computer"};
	int i,n=5;
	printf("the words are :\n");
	for(i=0;i<n;i++)
	{
		printf("\t wString[%d]=%s\n",i,wString[i]);
	}
	printf("after sort,the words are :\n");
	sort(wString,n);												//调用函数，对指针数组wString中的n个字符串排序
	for(i=0;i<n;i++)
	{
		printf("\t wString[%d]=%s\n",i,wString[i]);
	}
}
void sort(char *s[],int n)							//对指针数组s中的n个字符串按字典排序
{
	int i,j,k;
	char *temp;
	for(i=0;i<n-1;i++)
	{
		k=1;
		for(j=i+1;j<n;j++)
		{
			if(strcmp(s[k],s[j])>0)
				k=j;
			if(k!=i)
			{
				temp=s[i];
				s[i]=s[k];
				s[k]=temp;
			}
		}
	}
	
}