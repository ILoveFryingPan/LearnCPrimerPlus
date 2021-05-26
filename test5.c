//
// Created by android0 on 2021/5/22.
//

/* 第十一章 复习题 第五题 */
#include<stdio.h>

char * pr(char *str);

int main(void)
{
    char *x;
    char ho[] = {"Ho Ho Ho!"};
    x = pr(ho);
}

char *pr(char *str)
{
    char *pc;
    pc = str;
    while(*pc)
        putchar(*pc++);
    do {
        putchar(*--pc);
    } while(pc - str);
    return (pc);
}