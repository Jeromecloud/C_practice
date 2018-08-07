//了解多种方法输入输出字符串
#include <stdio.h>
void main()
{
	char str1[12],str2[12],str3[12];
	int i ;
	printf("用gets()/puts()输入/输出字符串(<12:)\n");
	gets(str1);
	puts(str1);
	printf("用scanf()/printf()输入/输出单个字符(<12:)\n");
	for(i=0;i<12;i++)
	{
		scanf("%c",&str2[i]);
	}
	for(i=0;i<12;i++)
	{
		printf("%c",str2[i]);
	}
	printf("\n");
	printf("用gets()/puts()输入/输出字符串(<12:)\n");
	scanf("%s",str3);
	printf("%s",str3);
	printf("\n");
}
