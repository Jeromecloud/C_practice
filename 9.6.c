//了解枚举类型的作用
#include <stdio.h>
enum months{Jan=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC};
void main()
{
	enum months month;
	char *monthName[]={"","January","February","March","April","May","June","July","Auguest","September","October","November","Dcember"};
	for(month=Jan;month<=DEC;month++)
	{
		printf("%2d --%-10s\n",month,monthName[month]);
	}
}