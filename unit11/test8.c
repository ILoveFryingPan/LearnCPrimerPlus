//
// Created by android0 on 2021/5/22.
//

/* 第十一章 复习题 第八题 */
#include<stdio.h>

int main(void)
{
    char str1[] = "gawsie";
    char str2[] = "bletonism";
    char *ps;
    int i = 0;
    for(ps = str1; *ps != '\0'; ps++) {
        if(*ps == 'a' || *ps == 'e')
            putchar(*ps);
        else
            (*ps)--;
        putchar(*ps);
    }
    putchar('\n');
    while(str2[i] != '\0') {
        printf("%c", i % 3? str2[i] : '*');
        ++i;
    }
    return 0;
}