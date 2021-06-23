//
// Created by android0 on 2021/6/18.
//

/* 第十三章 复习题 第五题 */
//文件名是：linechar.txt
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *s_gets(char *st, int num, FILE *fp);

int main(int argc, char *argv[])
{
    int ch;
    char line[257];
    FILE *fp;
    char *result;
    if(3 > argc)
    {
        fprintf(stderr, "paramer is letter,\n");
        exit(EXIT_FAILURE);
    }
    else if((fp = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "could not open %s.\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    ch = argv[1][0];
    while(s_gets(line, 257, fp))
    {
        result = strchr(line, ch);
        if(result)
        {
            printf("%s\n", line);
            fflush(stdout);
        }
    }
    return 0;
}

char *s_gets(char *st, int num, FILE *fp)
{
    char *val, *index;
    val = fgets(st, num, fp);
    if (val)
    {
        index = strchr(st, '\n');
        if (!index)
        {
            if (!feof(fp) && !ferror(fp))
                while (getc(fp) != '\n');
        }
        else
            *index = '\0';
    }
    return val;
}