//
// Created by android0 on 2021/5/29.
//

/**
 * 在学习输入流后，反过头来重新修改该文件
 */

/*第十一章 编程练习 第十一题 */
#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define LENG_CHAR 41
#define LENG_ARRAY 10

//显示菜单
void menu(void);

/*
 * 在输入列表的时候删除一行中多余的字符
 * 在用户输入菜单中的选项的时候，一个是清楚多余输入，另一个是输入错误时清空缓冲区
 */
void str_clear();

/*
 * 获取用户输入的最多10个字符串
 * list 是保存数据的字符型指针数组
 * num 是指针数组的数量
 * max_length 是每一个字符串的最大长度
 */
void get_list(int leng_array, int leng_char, char list[leng_array][leng_char]);

/*
 * 1.用于循环显示菜单
 * 2.判断用户输入的菜单项并作出对应的操作
 */
void deal_with_menu(int leng_array, int leng_char, const char list[leng_array][leng_char]);

/*
 * 返回一个单词的长度
 */
int strlen_word(const char *p);

/*
 * 用于输出字符型二维数组
 */
void puts_array(int leng_array, int leng_char, const char list[leng_array][leng_char]);

/*
 * 用于输出字符型指针数组
 */
void puts_list(const char **list, int num);

/*
 * 以ASCII中的顺序生成一个新的列表
 * 使用puts_list函数打印新的列表
 * 返回新的列表，以避免多次排列列表造成不必要的浪费
 * 初始化新的指针数组的时候第一个指针为空，表示需要生成
 */
void str_sort_asc(int leng_array, int leng_char, const char list[leng_array][leng_char], char **asc_list);

/*
 * 以字符串的长度生成一个新的列表
 * 使用puts_list函数打印新的列表
 * 返回新的列表，以避免多次排列列表造成不必要的浪费
 * 初始化新的指针数组的时候第一个指针为空，表示需要生成
 */
void str_sort_leng(int leng_array, int leng_char, const char list[leng_array][leng_char], char **leng_list);

/*
 * 以字符串中的第一个单词的长度生成一个新的列表
 * 使用puts_list函数打印新的列表
 * 返回新的列表，以避免多次排列列表造成不必要的浪费
 * 初始化新的指针数组的时候第一个指针为空，表示需要生成
 */
void str_sort_sl(int leng_array, int leng_char, const char list[leng_array][leng_char], char **sl_list);

int main(void) {
    char data[LENG_ARRAY][LENG_CHAR];
    printf("请输入最多%d句话，每句话以换行结束，"
           "\n每行最多%d个字母，多余的字母将会删除\n", LENG_ARRAY, LENG_CHAR);
    fflush(stdout);
    get_list(LENG_ARRAY, LENG_CHAR, data);

    deal_with_menu(LENG_ARRAY, LENG_CHAR, data);

    return 0;
}

void menu(void) {
    puts("1) 打印源字符串列表\n"
         "2) 以ASCII中的顺序打印字符串\n"
         "3) 按长度递增顺序打印字符串\n"
         "4) 按字符串中第一个单词的长度打印字符串\n"
         "5) 退出");

    fputs("请输入下面菜单中的序列号完成对应的操作：", stdout);
    fflush(stdout);
}

void str_clear(void) {
    while (getchar() != '\n');
}

void get_list(int leng_array, int leng_char, char list[leng_array][leng_char]) {
    int index = 0, char_num = 0;
    int ch;
    while (index < leng_array && (ch = getchar()) != EOF) {
        if (ch == '\n') {
            list[index][char_num] = '\0';
            index++;
            char_num = 0;
        } else {
            list[index][char_num] = ch;
            char_num++;
            if (char_num == leng_char) {
                list[index][char_num] = '\0';
                index++;
                char_num = 0;
                str_clear();
            }
        }
    }

    /*
     * 当循环结束前的最后一个字符不是EOF或者换行符，
     * 就表示最后一条数据还有缓存，需清空
     * 此时，因为清空后不再调用getchar()等输入的函数，
     * 所以程序会继续向下执行，此时用户无法在换行后的下一行继续输入
     * 直到下一次调用输入函数
     */
    if (ch != EOF && ch != '\n')
        str_clear();
    for (; index < leng_array; index++) {
        list[index][0] = '\0';
    };
    fflush(stdout);
}

void deal_with_menu(int leng_array, int leng_char, const char list[leng_array][leng_char]) {
    int serial_no, input_result = 0;
    char *asc_list[leng_array], *leng_list[leng_array], *sl_list[leng_array];
    asc_list[0] = leng_list[0] = sl_list[0] = NULL;

    while (1) {
        menu();
        input_result = scanf("%d", &serial_no);
        str_clear();
        if (0 == input_result) {
            puts("请输入有效的序列号\n");
            fflush(stdout);
            continue;
        }
        switch (serial_no) {
            case 1:
                puts_array(leng_array, leng_char, list);
                break;
            case 2:
                str_sort_asc(leng_array, leng_char, list, asc_list);
                break;
            case 3:
                str_sort_leng(leng_array, leng_char, list, leng_list);
                break;
            case 4:
                str_sort_sl(leng_array, leng_char, list, sl_list);
                break;
            case 5:
                return;
            default:
                puts("请输入有效的序列号\n");
                break;
        }
    }
}

void puts_array(int leng_array, int leng_char, const char list[leng_array][leng_char]) {
    int i;
    for (i = 0; i < leng_array; i++)
        puts(list[i]);
}

void puts_list(const char **list, int num) {
    int i;
    for (i = 0; i < num; i++)
        puts(list[i]);
}

int strlen_word(const char *data) {
    int len = 0;
    char *p = data;
    while (*p && !isspace(*p)) {
        len++;
        p++;
    }
    return len;
}

void str_sort_asc(int leng_array, int leng_char, const char list[leng_array][leng_char], char **asc_list) {
    int i, j, cmp;
    char *temp;
    if (asc_list[0] == NULL) {
        for (i = 0; i < leng_array; i++) {
            asc_list[i] = list[i];
        }
        for (i = 0; i < leng_array - 1; i++)
            for (j = i + 1; j < leng_array; j++) {
                cmp = strcmp(asc_list[i], asc_list[j]);
                if (cmp > 0) {
                    temp = asc_list[i];
                    asc_list[i] = asc_list[j];
                    asc_list[j] = temp;
                }
            }
    }
    puts_list(asc_list, leng_array);
}

void str_sort_leng(int leng_array, int leng_char, const char list[leng_array][leng_char], char **leng_list) {
    int i, j, last_leng, after_leng;
    char *temp;
    if (leng_list[0] == NULL) {
        for (i = 0; i < leng_array; i++) {
            leng_list[i] = list[i];
        }
        for (i = 0; i < leng_array - 1; i++)
            for (j = i + 1; j < leng_array; j++) {
                last_leng = strlen(leng_list[i]);
                after_leng = strlen(leng_list[j]);
                if (last_leng > after_leng) {
                    temp = leng_list[i];
                    leng_list[i] = leng_list[j];
                    leng_list[j] = temp;
                }
            }
    }

    puts_list(leng_list, leng_array);
}

void str_sort_sl(int leng_array, int leng_char, const char list[leng_array][leng_char], char **sl_list) {
    int i, j, last_leng, after_leng;
    char *temp;
    if (sl_list[0] == NULL) {
        for (i = 0; i < leng_array; i++) {
            sl_list[i] = list[i];
        }
        for (i = 0; i < leng_array - 1; i++)
            for (j = i + 1; j < leng_array; j++) {
                last_leng = strlen_word(sl_list[i]);
                after_leng = strlen_word(sl_list[i]);
                if (last_leng > after_leng) {
                    temp = sl_list[i];
                    sl_list[i] = sl_list[j];
                    sl_list[j] = temp;
                }
            }
    }
    puts_list(sl_list, leng_array);
}