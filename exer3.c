/*第十章 编程练习 第三题*/
#include<stdio.h>

int has_max(int *, int size);

int main(void)
{
	int max;
	int source[5] = {-3, -43, -2, -5, -20};
	max = has_max(source, 5);
	printf("The max integer is: %d.\n", max);
	return 0;
}

int has_max(int *source, int size)
{
	int i, max = 0;
	if(0 == size)
		return max;
	else
		max = source[0];
	for(i = 1; i < size; i++) {
		if(max < source[i])
			max = source[i];
	}
	return max;
}