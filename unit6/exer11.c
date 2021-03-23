/*第六章编程练习 第十一题*/
#include<stdio.h>
#define SIZE 8

int main(void)
{
	int array[SIZE], i;
	printf("Enter %d integer:", SIZE);
	for(i = 0; i < SIZE; i++)
		scanf("%d", &array[i]);
	printf("The %d integer is(from last to first):\n", SIZE);
	for(i = 0; i < SIZE; i++)
		printf("%5d", array[SIZE - i - 1]);
	printf("\n");
	return 0;
}
	