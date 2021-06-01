//
// Created by android0 on 2021/5/21.
//

/* copy1.c -- 演示 strcpy() */
#include<stdio.h>
#include<string.h>  //strcpy()的原型在该头文件中
#define SIZE 40
#define LIM 5

char * s_gets(char *st, int n);

int main(void)
{
    char qwords[LIM][SIZE];
    char temp[SIZE];
    int i = 0;
    printf("Enter %d words beginning with q: \n", LIM);
    fflush(stdout);
    while(i < LIM && s_gets(temp, SIZE))
    {
        if(temp[0] != 'q')
            printf("%s doesn't begin with q!\n", temp);
        else
        {
            strcpy(qwords[i], temp);
            i++;
        }
    }
    puts("Here are the words accepted:");
    for(i = 0; i < LIM; i++)
        puts(qwords[i]);
    return 0;
}