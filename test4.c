//
// Created by android0 on 2021/6/18.
//

/* 第十三章 复习题 第四题 */
//命令行输入的文件名是： num.txt
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    double sum = 0;
    double num;
    int index = 0;
    FILE *fp;
    if(2 <= sizeof(argv))
    {
        if((fp = fopen(argv[1], "r")) == NULL)
        {
            fprintf(stderr, "Could not open %s.\n", argv[1]);
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        fp = stdin;
    }

    while((fscanf(fp, "%lf", &num)) == 1)
    {
        sum += num;
        index++;
    }
    printf("算数平均数是:  %f.\n", sum / index);
}