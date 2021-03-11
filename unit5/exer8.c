/*第五章编程练习 第八题*/
#include<stdio.h>

int main(void)
{
	int dividend, divisor, remainder;
	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand:");
	scanf("%d", &divisor);
	printf("Now enter the first operand:");
	scanf("%d", &dividend);
	while(dividend > 0 & divisor > 0) {
		remainder = dividend % divisor;
		printf("%d %% %d is %d\n", dividend, divisor, remainder);
		printf("Enter next number for first operand (<= 0 to quit):");
		scanf("%d", &dividend);
	}
	printf("Done\n");
	return 0;
}
	