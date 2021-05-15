/*第十章 编程练习 第二题*/
#include<stdio.h>
#define SIZE 5

void copy_arr(double[], const double[], int size);
void copy_ptr(double *, const double *, int size);
void copy_ptrs(double *, const double *, double *);

void print_data(const double *, int size, char *p);

int main(void)
{
	double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[SIZE];
	double target2[SIZE];
	double target3[SIZE];
	
	copy_arr(target1, source, SIZE);
	copy_ptr(target2, source, SIZE);
	copy_ptrs(target3, source, source + SIZE);
	
	print_data(target1, SIZE, "第一个目标数组的元素");
	print_data(target2, SIZE, "第二个目标数组的元素");
	print_data(target3, SIZE, "第三个目标数组的元素");
	
	return 0;
}

void copy_arr(double target[], const double source[], int size)
{
	int i;
	for(i = 0; i < size; i++) {
		target[i] = source[i];
	}
}

void copy_ptr(double *target, const double *source, int size)
{
	int i;
	for(i = 0; i < size; i++) {
		target[i] = source[i];
	}
}

void copy_ptrs(double *target, const double *source, double *end)
{
	while(source < end) {
		*target = *source;
		source++;
		target++;
	}
}

void print_data(const double *source, int size, char *p)
{
	int i;
	printf("%s\n", p);
	for(i = 0; i < size; i++) {
		printf("%.1f \t", source[i]);
	}
	putchar('\n');
}