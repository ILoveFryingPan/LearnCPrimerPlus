#include<stdio.h>
#define BOOK "War and Peace"

int main(void)
{
	float cost = 12.99;
	float percent = 80.0;
	printf("This copy of \"%s\" sells for $%.2f.\n", BOOK, cost);
	printf("That is %.0f%% of list.\n", percent);
	printf("%#4X\n", 0x8A);
	printf("*%-20s*\n", "abcdefg");
	printf("*%15lu*\n", 233l);
	printf("%8.8s\n", "abcdefghijklmn");
	printf("***********\n");
	printf("*%+6.4d*\n", 256742);
	printf("The double type is %u bytes..\n", sizeof(double));
	return 0;
}