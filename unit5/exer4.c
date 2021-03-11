/*第五章编程练习 第四题*/
#include<stdio.h>
#define CM_INCHES 0.393700788
#define INCHES_FEET 0.083333333333333
int main(void)
{
	double cm, inches;
	int feet;
	printf("Enter a height in centimeters:");
	scanf("%lf", &cm);
	while(cm > 0) {
		inches = cm * CM_INCHES;
		feet = inches * INCHES_FEET;
		inches = inches - feet / INCHES_FEET;
		printf("%.1f cm = %d feet, %.1f inches\n", cm, feet, inches);
		printf("Enter a height in centimeters (<=0 to quit):");
		scanf("%lf", &cm);
	}
	printf("bye\n");
	return 0;
}
