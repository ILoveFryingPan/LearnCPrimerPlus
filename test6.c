/*第七章 复习题 第六题*/
#include<stdio.h>
int main(void)
{
	int i = 0;
	while(i < 3) {
		switch(i++) {
			case 0:printf("fat");
			case 1:printf("hat");
			case 2:printf("cat");
			default:printf("Oh no!");
		}
		printf("\n");
	}
	return 0;
}
