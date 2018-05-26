#include <stdio.h>
void main()
{
	char ch;
	printf("Please Choice : Abort,Retry, or Fail?\n");
	ch =getchar();
	switch(ch)
	{
	case 'a':
	case 'A':printf("Abort\n");break;
	case 'r':
	case 'R':printf("Retry\n");break;
	case 'f':
	case 'F':printf("Fail\n");break;
	default:printf("Sorry,You are error\n");
	}
}