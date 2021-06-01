//
// Created by android0 on 2021/5/20.
//

/* fgets2.c -- 使用 fgets() 和 fputs()*/
#include<stdio.h>
#define STLEN 10
int main(void)
{
    char words[STLEN];
    puts("Enter strings(empty line to quit):");
    fflush(stdout);
    while(fgets(words, STLEN, stdin) != NULL && '\n' != words[0]) {
        fputs(words, stdout);
        fflush(stdout);
    }
    puts("Done.");
    return 0;
}