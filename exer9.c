/*第七章 编程练习 第九题*/
#include<stdio.h>
#include<ctype.h>
int main(void)
{
	int num, div, isPrime, i;
	char ch;
	printf("Please enter a positive integer:");
	while(0 == scanf("%d", &num) || (ch = getchar()) && !isspace(ch) || 0 >= num)
	{
		if(ch != '\n')
			while(getchar() != '\n');
		printf("Please enter a positive integer:");
	}
	if(1 == num)
	{
		printf("1 is not prime.\n");
		return 0;
	}
	for(i = 2; i <= num; i++)
	{
		for(div = 2, isPrime = 1; (div * div) <= i; div++)
		{
			if(i % div == 0)
			{
				isPrime = 0;
				break;
			}
		}
		if(1 == isPrime)
		{
			printf("The prime is %d.\n", i);
		}
	}
	return 0;
}
