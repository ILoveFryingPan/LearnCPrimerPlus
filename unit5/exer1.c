/*第五章编程练习 第一题*/
#include<stdio.h>
#define PER_H 60
int main(void)
{
	int minute, hours;
	printf("Enter a num for minute:");
	scanf("%d", &minute);
	while(minute > 0) {
		hours = minute / PER_H;
		minute = minute % PER_H;
		printf("time is %d:%d\n", hours, minute);
		printf("Enter a num for minute:");
		scanf("%d", &minute);
	}
	printf("That's all\n");
	return 0;
}
