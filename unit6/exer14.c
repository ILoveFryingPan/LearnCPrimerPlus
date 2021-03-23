/*第六章编程练习 第十四题*/
#include<stdio.h>
#define SIZE 8

int main(void)
{
	int array1[SIZE], array2[SIZE], i;
	
	printf("Enter %d integer:", SIZE);
	for(i = 0; i< SIZE; i++)
	{
		scanf("%d", &array1[i]);
	}
	array2[0] = array1[0];
	for(i = 1; i < SIZE; i++)
	{
		array2[i] = array2[i - 1] + array1[i];
	}
	for(i = 0; i < SIZE; i++)
	{
		printf("%5d", array1[i]);
	}
	printf("\n");
	for(i = 0; i < SIZE; i++)
	{
		printf("%5d", array2[i]);
	}
	printf("\n");
	return 0;
}