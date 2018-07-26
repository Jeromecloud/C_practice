//了解条件编译
#include <stdio.h>
#define MAX 10
void main()
{
	#if MAX>99
		printf("compile for array greater than 99\n");
	#else 
		printf("compile for small array\n");
	#endif
}