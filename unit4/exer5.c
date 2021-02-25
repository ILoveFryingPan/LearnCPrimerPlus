#include<stdio.h>

int main(void)
{
	float megabits;
	float megabytes;
	float time;
	
	printf("enter megabits persecond and megabytes for file:");
	scanf("%f%f", &megabits, &megabytes);
	time = megabytes * 8 / megabits;
	printf("At %.2f megabits per second, a file of %.2f megabytes \
	\ndownloads in %.2f seconds.", megabits, megabytes, time);
	return 0;
}