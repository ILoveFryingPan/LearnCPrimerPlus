/*intconv.c--一些不匹配的整型转换*/
#include<stdio.h>
#define PAGES 336
#define WORDS 65618

int main(void)
{
	short num = PAGES;
	short mnum = -PAGES;
	int word = WORDS;
	*((&word) - 1) = 0;
	*((&word) - 2) = 0;
	*((&word) - 3) = 0;
	word = WORDS;
	printf("num as short and unsigned short:%hd %hu\n", num, num);
	printf("-num as short and unsigned short:%hd %hu\n", mnum, mnum);
	printf("WORDS as int, short, and char:%d %hd %c\n", WORDS, WORDS, WORDS);
	printf("WORDS as short zero, one, two, three:%hd %hd %hd %hd\n", word, *((&word) - 1), *((&word) - 2), *(&word - 3)); 
	return 0;
}