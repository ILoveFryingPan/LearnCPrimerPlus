//
// Created by android0 on 2021/5/27.
//

/* 第十一章 编程练习 第八题 */
#include<stdio.h>
#include<string.h>

#define SIZE 40

char *s_gets(char *st, int n);

char *string_in(char *str1, char *str2);

int main(void) {
    char data[40], *data_result;
    char second_data[40], second_result;
    char *in_result, in_msg[100];

    puts("请输入一句话.");
    fflush(stdout);
    data_result = s_gets(data, 40);
    puts("请在输入一句话.");
    fflush(stdout);
    second_result = s_gets(second_data, 40);
    while (data_result && data[0] != '\0' && second_result && second_data[0] != '\0') {
        in_result = string_in(data, second_data);
        if (in_result) {
            sprintf(in_msg, "%s包含字符串%s", data, second_data);
        } else {
            sprintf(in_msg, "%s不包含字符串%s", data, second_data);
        }
        puts(in_msg);
        puts(in_result);
        puts("请输入一句话，以空行结束");
        fflush(stdout);
        data_result = s_gets(data, 40);
        if (!data_result || data[0] == '\0')
            break;
        puts("请再输入一句话，以空行结束");
        fflush(stdout);
        second_result = s_gets(second_data, 40);
    }
    puts("Done!");
    return 0;
}

char *string_in(char *str1, char *str2) {
    int leng1;
    int leng2;
    int index = 0;
    int same_num = 0;
    leng1 = strlen(str1);
    leng2 = strlen(str2);
    if (leng1 < leng2)
        return NULL;
    else if (leng1 == leng2)
        if (!strcmp(str1, str2))
            return str1;
        else
            return NULL;
    while (str1[index + same_num] && same_num < leng2 && index + leng2 <= leng1) {
        if (str1[index + same_num] == str2[same_num]) {
            same_num++;
        } else {
            index = index + same_num + 1;
            same_num = 0;
        }
    }
    if (same_num == leng2)
        return &str1[index];
    else
        return NULL;
}