//
// Created by android0 on 2021/5/27.
//

/* 第十一章 编程练习 第六题 */
#include<stdio.h>
#include<string.h>
#define SIZE 40

int is_within(char ch, char *p);
char * s_gets(char *st, int n);

int main(void)
{
    char data[SIZE], *input_result;
    char ch;
    int result;

    fputs("请输入一句话: ", stdout);
    fflush(stdout);
    input_result = s_gets(data, SIZE);
    if(input_result && data[0] != '\0') {
        fputs("请输入一个文字：", stdout);
        fflush(stdout);
        ch = getchar();
        while (getchar() != '\n');
        while (input_result && data[0] != '\0' && ch != '\n')
        {
            result = is_within(ch, data);
            if(result)
                puts("指定的字符存在在字符串中");
            else
                puts("指定的字符没有在字符串中存在");
            fputs("请输入一句话，以空行结束程序：", stdout);
            fflush(stdout);
            input_result = s_gets(data, SIZE);
            if(!input_result || data[0] == '\0')
                break;
            fputs("请输入一个文字：", stdout);
            fflush(stdout);
            ch = getchar();
            while(getchar() != '\n');
        }
    }
    return 0;
}

int is_within(char ch, char *p)
{
    char *result;
    result = strchr(p, ch);
    if(result)
        return 1;
    else
        return 0;
}