/*第八章编程练习 第四题*/
#include<stdio.h>
#include<ctype.h>

int main(void)
{
	int ch, is_letter = 0, word_counter = 0, letter = 0;
	
	while((ch = getchar()) != EOF)
	{
		if(ispunct(ch)) {
			is_letter = 0;
			continue;
		}
		if(isspace(ch)){
			is_letter = 0;
			continue;
		}
		if(0 == is_letter){
			word_counter++;
			is_letter = 1;
		}
		letter ++;
	}
	printf("平均每一个单词有%d个字母。\n", letter / word_counter);
	printf("共有%d个字母，有%d个单词。\n", letter, word_counter);
	return 0;
}
