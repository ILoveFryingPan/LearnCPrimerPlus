/*第六章编程练习 第八题*/
#include<stdio.h>
int main(void)
{
	double d1, d2;
	printf("Enter two num:");
	while(2 == scanf("%lf%lf", &d1, &d2))
	{
		printf("the result is: %f\n", (d1 - d2) / (d1 * d2));
	}
	return 0;
}
	