//
// Created by android0 on 2021/5/20.
//

/*getsputs.c -- 使用gets()和puts()*/
#include<stdio.h>
#define STLEN 81
int main(void)
{
    char words[STLEN];
    puts("Enter a string, please.");
    fflush(stdout);
    gets(words);    //典型用法
    printf("%s\n", words);
    puts(words);
    puts("Done.");
    return 0;
}