//
// Created by android0 on 2021/6/11.
//

#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

void sort(int *p, int num);

int main(void)
{
    int nums[SIZE];
    /**
     * 随机数我还不会写，以后回了再补回来
     */
}

void sort(int *p, int num)
{
    int temp, i, j;
    for(i = 0; i < num - 1; i++)
        for(j = i + 1; j < num; j ++)
        {
            if(p[i] < p[j])
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
}