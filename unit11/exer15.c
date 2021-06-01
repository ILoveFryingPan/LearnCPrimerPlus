//
// Created by android0 on 2021/6/1.
//

/* 第十一章 编程练习 第十五题 */
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

char *s_gets(char *st, int n);

int stoi(const char *st);

int main(void) {
    char data[40], *result;
    int result_atoi, result_stoi;
    puts("请输入一句话，包含数字：");
    fflush(stdout);
    result = s_gets(data, 40);
    while (result) {
        printf("int by atoi is : %d.\n", atoi(data));
        printf("int by stoi is : %d.\n", stoi(data));
        fflush(stdout);
        result = s_gets(data, 40);
    }
    return 0;
}

int stoi(const char *data) {
    int result = 0;
    int flag = 1;
    while (*data) {
        if (isspace(*data)) {
            if(0 != result) {
                break;
            } else {
                data++;
                continue;
            }
        } else if (!isdigit(*data)) {
            if (*data == '-' && flag == 1) {
                flag = -1;
                data++;
            } else
                break;
        } else {
            result = result * 10 + *data - 48;
            data++;
        }
    }
    return result * flag;
}