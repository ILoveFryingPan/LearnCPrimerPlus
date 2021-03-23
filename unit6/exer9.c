/*第六章编程练习 第九题*/
#include<stdio.h>

double compute(double d1, double d2);

int main(void)
{
	double d1, d2;
	printf("Enter two num: ");
	while(2 == scanf("%lf%lf", &d1, &d2))
	{
		printf("The result is: %f\n", compute(d1, d2));
	}
	return 0;
}

double compute(double d1, double d2)
{
	return (d1 - d2) / (d1 * d2);
}