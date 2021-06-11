//
// Created by android0 on 2021/6/11.
//

/* 第十二章 编程练习 第九题 */

#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int word_gets(char *p, int max_length);
void word_copy(char **p, int index, char *word, int length);

int main(void)
{
    char **p;
    char word[20];
    int word_num, i, word_length;
    printf("How many words do you wish to enter? ");
    fflush(stdout);
    scanf("%d", &word_num);
    printf("Enter %d words now: \n", word_num);
    fflush(stdout);
    p = (char **) malloc(word_num * sizeof(char *));
    for(i = 0; i < word_num; i++)
    {
        word_length = word_gets(word, 20);
        word_copy(p, i, word, word_length);i, word, word_length;i, word, word_length;i, word, word_length;i, word, word_length;i, word, word_length;i, word, word_length;i, word, word_length;
    }
    puts("Here are your words:");
    for(i = 0; i < word_num; i ++)
        puts(p[i]);
    for(i = 0; i < word_num; i++)
        free(p[i]);
    free(p);
    return 0;
}

int word_gets(char *p, int max_length)
{
    int length = 0, ch;

    while(isspace((ch = getchar())));

    p[length] = ch;
    length++;

    while(length < max_length - 1 && (ch = getchar()) != '\n' && !isspace(ch)) {
        p[length] = ch;
        length++;
    }
    p[length] = '\0';
    while(!isspace(ch) && ch != '\n')
    {
        ch = getchar();
    }
}

void word_copy(char **p, int index, char *word, int length)
{
    char *w;
    w = (char *) malloc(length + 1);
    strncpy(w, word, length);
    p[index] = w;
}