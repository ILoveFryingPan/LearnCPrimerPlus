/*第五章练习题 第九题*/
#include<stdio.h>
#define LAST_CHAR 'g'
int main(void)
{
	char n = 'a';
	n--;
	while (n++ < 'g')
		printf("%5c", n);
	printf("\n");
	return 0;
}