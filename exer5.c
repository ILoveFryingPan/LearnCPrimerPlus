/*第十章 编程练习 第五题*/
#include<stdio.h>
#define SIZE 5

double diff(double *, unsigned int size);

int main(void)
{
	double diff_data = 0, array[SIZE] = {23, 34, -48, 8, -90};
	diff_data = diff(array, SIZE);
	printf("The diff is %f.\n", diff_data);
	return 0;
}

double diff(double *p, unsigned int size)
{
	int i;
	double min, max;
	if(0 == size || 1 == size)
		return 0;
	else {
		min = *p;
		max = *p;
	}
	
	for(i = 1; i < size; i++) {
		if(min > p[i])
			min = p[i];
		if(max < p[i])
			max = p[i];
	}
	return max - min;
}
		