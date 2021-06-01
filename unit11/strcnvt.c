//
// Created by android0 on 2021/5/22.
//

/* strcnvt.c -- 使用 strtol() */
#include<stdio.h>
#include<stdlib.h>
#define LIM 30

char * s_gets(char *st, int n);

int main(void)
{
    char number[LIM];
    char *end;
    long value;
    puts("Enter a number (empty line to quit):");
    fflush(stdout);
    while(s_gets(number, LIM) && number[0] != '\0')
    {
        value = strtol(number, &end, 10);   /*十进制*/
        printf("base 10 input, base 10 output: %ld, stopped at"
               " %s (%d)\n", value, end, *end);
        value = strtol(number, &end, 16);   /*十六进制*/
        printf("base 16 input, base 10 output: %ld, "
               "stopped at %s (%d)\n", value, end, *end);
        puts("Next number:");
        fflush(stdout);
    }
    puts("Bye!\n");
    return 0;
}