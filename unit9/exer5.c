/*第九章编程练习 第五题*/
#include<stdio.h>

void larger_of(double *, double *);

int main(void)
{
	double x = 3.5, y = 7.2;
	larger_of(&x, &y);
	printf("y = %.2f and x = %.2f.\n", y, x);
	return 0;
}

void larger_of(double *m, double *n)
{
	*m = *m > *n ? *m : *n;
	*n = *m;
}
