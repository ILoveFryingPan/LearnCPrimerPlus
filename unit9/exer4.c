/*第九章 编程练习 第四题*/
#include<stdio.h>

double average(double, double);

int main(void)
{
	double x = 3, y = 4;
	printf("The average is: %.2f.\n", average(x, y));
	return 0;
}

double average(double m, double n)
{
	return 1 / ((1 / m + 1 / n) / 2);
}
