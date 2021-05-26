//
// Created by android0 on 2021/5/24.
//

/* 第十一章 编程练习 第三题 */
#include<stdio.h>
#include<ctype.h>

void s_word(char *p, int n);

int main(void)
{
    char data[10];
    int result;
    puts("请输入一段话");
    fflush(stdout);
    s_word(data, 10);
    fputs("输入的文字是：", stdout);
    puts(data);
    return 0;
}

void s_word(char *p, int n)
{
    int ch, maxNum = n - 1, index = 0;
    while(isspace(ch = getchar()) && ch != '\n' && ch != EOF);
    if(ch == '\n' || ch == EOF) {
        p[index] = '\0';
        return;
    } else {
        p[index] = ch;
        index++;
    }
    while((ch = getchar()) != '\n' && ch != EOF && !isspace(ch) && index < maxNum) {
        p[index] = ch;
        index++;
    }
    p[index] = '\0';
}