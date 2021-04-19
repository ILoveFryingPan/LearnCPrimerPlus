/*第九章编程练习 第一题*/
#include<stdio.h>

double min(double, double);

int main(void)
{
	double x = 3.0, y = 9.2;
	printf("The min is : %f.\n", min(x, y));
	return 0;
}

double min(double x, double y)
{
	return x > y ? y : x;
}
