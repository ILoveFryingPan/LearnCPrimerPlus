/*第五章编程练习 第三题*/
#include<stdio.h>
#define WEEK_DAYS 7
int main(void)
{
	int num, days, weeks;
	printf("Enter a num for days:");
	scanf("%d", &num);
	while(num > 0) {
		weeks = num / WEEK_DAYS;
		days = num % WEEK_DAYS;
		printf("%d days are %d weeks, %d days.\n", num, weeks, days);
		printf("Enter a num for days:");
		scanf("%d", &num);
	}
	printf("Program exit.\n");
	return 0;
}

