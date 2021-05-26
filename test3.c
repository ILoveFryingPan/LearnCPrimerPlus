//
// Created by android0 on 2021/5/22.
//

/* 第十一章 复习题 第三题 */
#include<stdio.h>
#include<string.h>
int main(void)
{
    char food[] = "Yummy";
    char *ptr;
    ptr = food + strlen(food);
    while(--ptr >= food)
        puts(ptr);
    return 0;
}