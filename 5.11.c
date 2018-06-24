//求圆面积在100平方米之内的半径，输出所有满足条件的半径值和圆面积的值，并输出第一个大于100的圆半径和圆面积
#include <stdio.h>
int main()
{
	int r;
	float area;
	float pi=3.14;
	printf("面积在100平方米以内的圆半径和圆面积：\n半径\t面积\n");
	for(r=1;;r++)
	{
		area=r*r*pi;
		
		if(area<100)
		{
			printf("%d\t%f\n",r,area);
		}
		else
		{
			printf("第一个面积大于100平方米的圆半径和面积为：\nr=%d\tarea=%f\n",r,area);
			break;
		}
	}
	
	return 0;
}