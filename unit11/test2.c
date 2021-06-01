//
// Created by android0 on 2021/5/22.
//

/* 第十一章 复习题 第二题 */
#include<stdio.h>
int main(void)
{
    char note[] = "See you at the snack bar.";
    char *ptr;
    ptr = note;
    puts(ptr);
    puts(++ptr);
    note[7] = '\0';
    puts(note);
    puts(++ptr);
    return 0;
}