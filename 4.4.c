#include <stdio.h>
void main ()
{
	char ch;
	ch=getchar();
	if(ch=='+')
		printf("plus\n");
	else if(ch=='-')
		printf("minus\n");
	else 
		printf("you are wrong\n");
}