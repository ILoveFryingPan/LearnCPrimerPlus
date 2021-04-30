/*第十章 复习题 第四题*/
#include<stdio.h>

int main(void)
{
	int *ptr;
	int torf[2][2] = {{12}, {14, 16}};
	ptr = torf[0];
	printf("%d  %d.\n", *ptr, *(ptr + 2));
	return 0;
}