//了解字符串拷贝函数
#include <stdio.h>
#include <string.h>
void main()
{
	int i;
	char name1[6]={"apple"};
	char name2[11]={"c_language"};
	printf("the value of name1 and name2:\n");
	printf("name1=%s\nname2=%s\n",name1,name2);
	strcpy(name2,name1);
	printf("after change the name2:\nname2=%s\n",name2);
	printf("the all value of name2:\n");
	for(i=0;i<11;i++)
	{
		printf("%c",name2[i]);
	}
	printf("\n");
}