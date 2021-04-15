/*第八章 练习题 第三题*/
#include<stdio.h>

int main(void)
{
	int ch, count = 0;
	while((ch = getchar()) != EOF)
	{
		count++;
	}
	printf("文件中的字符数是：%d.\n", count);
	return 0;
}
