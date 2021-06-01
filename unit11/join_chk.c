//
// Created by android0 on 2021/5/20.
//

/* join_chk -- 拼接两个字符串，检查第一个数组的大小*/
#include<stdio.h>
#include<string.h>
#define SIZE 30
#define BUGSIZE 13

char * s_gets(char *st, int n);

int main(void)
{
    char flower[SIZE];
    char addon [] = "s smell like old shoes.";
    char bug[BUGSIZE];
    int available;
    puts("What is your favorite flower?");
    fflush(stdout);
    s_gets(flower, SIZE);
    if((strlen(addon) + strlen(flower) + 1) <= SIZE)
        strcat(flower, addon);
    puts(flower);
    puts("What is your favorite bug?");
    fflush(stdout);
    s_gets(bug, BUGSIZE);
    available = BUGSIZE - strlen(bug) - 1;
    strncat(bug, addon, available);
    puts(bug);
    return 0;
}