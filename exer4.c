/*第十章 编程练习 第四题*/
#include<stdio.h>

int has_max(double *, int size);

int main(void)
{
	int index;
	double source[5] = {-3, -43, -12.5, -5.2, -20.7};
	index = has_max(source, 5);
	printf("The max integer is: %d.\n", index);
	return 0;
}

int has_max(double *source, int size)
{
	int i, index = -1;
	double max = 0;
	if(0 == size)
		return index;
	else {
		max = source[0];
		index = 0;
	}
	for(i = 1; i < size; i++) {
		if(max < source[i]) {
			max = source[i];
			index = i;
		}
	}
	return index;
}
