#include<stdio.h>

int main(void)
{
	double num_d = 1.0 / 3.0;
	float num_f = 1.0 / 3.0;
	
	printf("six %.6f, 12wei %.12f, 16wei %.16f\n", num_d, num_d, num_d);
	printf("six %.6f, 12wei %.12f, 16wei %.16f\n", num_f, num_f, num_f);
	
	return 0;
}