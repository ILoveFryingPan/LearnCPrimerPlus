//
// Created by android0 on 2021/5/24.
//

/*第十一章 编程练习 第二题 */
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void s_endspace(char *p, int n);

int main(void) {
    char data[40];
    puts("请输入一段话。");
    fflush(stdout);
    s_endspace(data, 10);
    fputs("输入的文字是：", stdout);
    puts(data);
    return 0;
}

void s_endspace(char *p, int n) {
    int ch, index = 0;
    while ((ch = getchar()) != '\n' && ch != EOF && !isspace(ch) && index < n)
    {
        p[index] = ch;
        index++;
    }
    p[index] = '\0';
}