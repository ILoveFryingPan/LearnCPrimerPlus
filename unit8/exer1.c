/*第八章 编程练习 第一题*/
#include<stdio.h>
int main(void)
{
	int ch, count = 0;
	putchar('*');
	while((ch = getchar()) != EOF)
	{
		putchar(ch);
		count++;
	}
	printf("*\n文件中的字符数是：%d.\n", count);
	return 0;
}
