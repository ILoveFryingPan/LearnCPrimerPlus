/*第九章 编程练习 第十题*/
#include<stdio.h>

void to_base_n(unsigned long, unsigned int);

int main(void)
{
	unsigned long number;
	unsigned int scale;
	printf("Enter an integer (q to quit):\n");
	while(scanf("%lu", &number) == 1)
	{
		printf("Enter an integer (2 to 10)\n");
		while(scanf("%u", &scale) != 1 || (scale < 2 || scale > 10))
			printf("Enter an integer (2 to 10)\n");
		to_base_n(number, scale);
		putchar('\n');
		printf("Enter an integer (q to quit):\n");
	}
	printf("Done.\n");
	return 0;
}

void to_base_n(unsigned long number, unsigned int scale)
{
	int r;
	r = number % scale;
	if(number >= scale)
		to_base_n(number / scale, scale);
	putchar('0' + r);
	return;
}
