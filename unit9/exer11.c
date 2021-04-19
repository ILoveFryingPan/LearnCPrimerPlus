/*第九章 编程练习 第十一题*/
#include<stdio.h>

int Fibonacci(int n);

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("The result is: %d.\n", Fibonacci(n));
	return 0;
}

int Fibonacci(int n)
{
	int result, a = 1, b = 1, i;
	if(n == 1 || n == 2)
		return 1;
	for(i = 3; i <= n; i++)
	{
		result = a + b;
		a = b;
		b = result;
	}
	return result;
}
