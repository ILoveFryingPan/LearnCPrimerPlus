/*第五章编程练习 第二题*/
#include<stdio.h>
int main(void)
{
	int num, index;
	printf("Enter a integer:");
	scanf("%d", &num);
	index = num;
	while(index <= num + 10) {
		printf("%5d", index);
		index++;
	}
	printf("\nThat's all\n");
	return 0;
}
