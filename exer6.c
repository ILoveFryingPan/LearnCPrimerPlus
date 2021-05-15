/*第十章 编程练习 第六题*/
#include<stdio.h>
#define SIZE 6

void reverse(double *, unsigned int size);

int main(void)
{
	int i;
	double array[SIZE] = {23.3, -66.3, 09.3, 88, -28, -89};
	
	printf("The original array is : \n");
	for(i = 0; i < SIZE; i++) {
		printf("%.1f \t", array[i]);
	}
	putchar('\n');
	reverse(array, SIZE);
	printf("The change array is : \n");
	for(i = 0; i < SIZE; i++) {
		printf("%.1f \t", array[i]);
	}
	return 0;
}

void reverse(double *p, unsigned int size)
{
	int i, time = size / 2;
	double temp;
	for(i = 0; i < time; i++) {
		temp = p[i];
		p[i] = p[size - i - 1];
		p[size - i - 1] = temp;
	}
}