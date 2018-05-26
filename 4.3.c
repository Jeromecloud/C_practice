#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	int guess,magic;
	srand(time(NULL));
	magic = rand();
	printf("Please enter a guess number:\n");
	scanf("%d",&guess);
	if (guess == magic)
		printf("Gratulation!You are Right.\n");
	else 
		printf("Sorry!You Are Wrong.\n");
}