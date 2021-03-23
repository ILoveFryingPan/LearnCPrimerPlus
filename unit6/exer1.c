/*第六章编程练习 第一题*/
#include<stdio.h>
#define SIZE 26
int main(void)
{
	int i;
	char word[SIZE];
	char letter = 'a';
	for(i = 0; i < SIZE; i++)
	{
		word[i] = letter + i;
	}
	
	for(i = 0; i < SIZE; i++)
	{
		printf("%5c", word[i]);
	}
	printf("\n");
	return 0;
}