#include<stdio.h>
int main(void)
{
	float num;
	printf("Enter a num: ");
	scanf("%f", &num);
	printf("the num is %+.3f\t%.3e\n", num, num);
	return 0;
}