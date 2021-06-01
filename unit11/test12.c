//
// Created by android0 on 2021/5/22.
//

/* 第十一章复习题 第十二题 */
#include<stdio.h>

char * first_space(char *);

int main(void)
{
    char *p;
    p = first_space("abcd mln 我爱北京 天安门");
    puts(p);
    return 0;
}

char * first_space(char *str)
{
    while(*str) {
        if(' ' == *str)
            return str;
        str++;
    }
    return NULL;
}