//了解条件编译
#include <stdio.h>
#define TED 10
void main()
{
	#ifdef TED
		printf("hi ,TED\n");
	#else 
		printf("hi ,anyone\n");
	#endif
	#ifndef RALPH
		printf("raplh not defined\n");
	#endif
}