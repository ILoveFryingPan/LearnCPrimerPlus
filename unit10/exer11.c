//
// Created by android0 on 2021/5/15.
//
/*第十章 编程练习 第十一题*/

#include<stdio.h>
#define N 3
#define M 5

void show_data(int array[][M], int n);
void data_increment(int array[][M], int n);
int main(void)
{
    int array[N][M] = {
            {2, 4, -6, 0, 8},
            {9, -3, 9, -8, 2},
            {-8, -2, -6, 2, 5}
    };
    printf("数组的初始数据是：\n");
    show_data(array, N);
    data_increment(array, N);
    printf("加倍后的数据是：\n");
    show_data(array, N);

    return 0;
}

void show_data(int array[][M], int n)
{
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < M; j++)
            printf("%d \t", array[i][j]);
        putchar('\n');
    }
    putchar('\n');
}

void data_increment(int array[][M], int n)
{
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < M; j++)
            array[i][j] = array[i][j] + array[i][j];
    }
}