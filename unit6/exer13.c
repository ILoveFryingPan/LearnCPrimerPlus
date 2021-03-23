/*第六章编程练习 第十三题*/
#include<stdio.h>
#define SIZE 8

int main(void)
{
	int array[SIZE], i, j;
	for(i = 0; i < SIZE; i++)
	{
		array[i] = 1;
		for(j = 0; j <= i; j++)
		{
			array[i] *= 2;
		}
	}
	i = 0;
	do
	{
		printf("%5d", array[i]);
		i++;
	} while(SIZE > i);
	return 0;
}