/*第十章 复习题 第七题*/
#include<stdio.h>

int main(void)
{
	int *psa[20];
	int i = 10;
	psa[4] = &i;
	printf("%d, %d, %p.\n", psa[4][0], *psa[4], psa[4]);
	return 0;
}