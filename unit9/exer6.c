/*第九章 编程练习 第六题*/
#include<stdio.h>

void sort(double *, double *, double *);

int main(void)
{
	double a = 7, b = 2, c = 10;
	sort(&a, &b, &c);
	printf("a = %.2f and b = %.2f and c = %.2f.\n", a, b, c);
	return 0;
}

void sort(double *a, double *b, double *c)
{
	double temp;
	if(*a > *b) {
		temp = *b;
		*b = *a;
		*a = temp;
	}
	if(*b > *c) {
		temp = *c;
		*c = *b;
		*b = temp;
	}

	if(*a > *b){
		temp = *b;
		*b = *a;
		*a = temp;
	}
}
