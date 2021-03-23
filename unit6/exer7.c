/*第六章编程练习 第七题*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[40];
	int size, i;
	printf("Enter a string:");
	scanf("%s", str);
	size = strlen(str);
	for(i = 0; i < size; i++)
	{
		printf("%c", str[size - i - 1]);
	}
	return 0;
}