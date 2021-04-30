/*第十章 复习题 第五题*/
#include<stdio.h>

int main(void)
{
	int (*ptr)[2];
	int torf[2][2] = {12, 14, 16};
	ptr = torf;
	printf("%d, %d, %d, %d.\n", **ptr, *(ptr + 1)[0], *ptr[0], *(ptr[1]));
	return 0;
}