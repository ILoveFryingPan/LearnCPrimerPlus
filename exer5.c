//
// Created by android0 on 2021/5/24.
//

/*第十一章 编程练习 第五题 */
#include<stdio.h>

char *s_chr(const char *p, int ch);

char *s_gets(char *st, int n);

int main(void) {
    char data[40], *result, search, *search_result;
    puts("请输入一段文字：");
    fflush(stdout);
    result = s_gets(data, 40);
    if (result) {
        puts("输入的文字是：");
        puts(data);
        puts("请输入要查找的一个文字：");
        fflush(stdout);
        search = getchar();
        if (search != '\n')
            while (getchar() != '\n');
        else
            return 0;
        while (search != '\n') {
            printf("从\"%s\"中查找文字\"%c\".\n", data, search);
            search_result = s_chr(data, search);
            if (search_result) {
                puts(search_result);
            }
            puts("请继续输入查找的文字，空行结束。");
            fflush(stdout);
            search = getchar();
            if (search != '\n')
                while (getchar() != '\n');
            else
                break;
        }
    }
    return 0;
}

char *s_chr(const char *p, int ch) {
    int index = 0;
    while (p[index] != '\0' && p[index] != ch) {
        index++;
    }
    if (p[index] == '\0')
        return NULL;
    else
        return &p[index];
}