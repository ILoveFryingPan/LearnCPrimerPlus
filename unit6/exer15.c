/*第六章 编程练习 第十五题*/
#include<stdio.h>
#include<string.h>
#define SIZE 255

int main(void)
{
	int i = 0, length;
	char sentence[SIZE];
	printf("Enter a sentence:");
	scanf("%c", &sentence[i]);
	while('\n' != sentence[i]) {
		i++;
		scanf("%c", &sentence[i]);
	}
	sentence[i] = '\0';
	length = strlen(sentence);
	printf(":%s\n", sentence);
	for(i = 0; i < length; i++)
	{
		printf("%c", sentence[length - i - 1]);
	}
	printf("*\n");
	return 0;
}
	