/*第五章编程练习 第七题*/
#include<stdio.h>

void compute_cube(double num);

int main(void)
{
	double num;
	printf("Enter a num:");
	scanf("%lf", &num);
	compute_cube(num);
	return 0;
}

void compute_cube(double num)
{
	double cube;
	cube = num * num * num;
	printf("The cube of %lf is %lf.\n", num, cube);
	return;
}