//
// Created by android0 on 2021/5/22.
//

/* 第十一章 复习题 第十题 */
#include<stdio.h>

int s_len(char *);

int main(void)
{
    int len;
    printf("计算字符串的长度.\n");
    len = s_len("abcdefg");
    printf("字符串的长度是：%d.\n", len);
    return 0;
}

int s_len(char *str)
{
    int len = 0;
    while(*str++)
        len++;
    return len;
}