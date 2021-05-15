//
// Created by android0 on 2021/5/15.
//
#include<stdio.h>
#define N 3
#define M 5

void input_data(int n, int m, double array[n][m]);
void average_single(int m, const double array[m]);
double average_all(int n, int m, const double array[n][m]);
double get_max(int n, int m, const double array[n][m]);
void show_result(double average, double max);

int main(void)
{
    int i;
    double average, max;
    double array[N][M];
    input_data(N, M, array);
    for(i = 0; i < N; i++)
        average_single(M, array[i]);
    average = average_all(N, M, array);
    max = get_max(N, M, array);
    show_result(average, max);

    return 0;
}

void input_data(int n, int m, double array[n][m])
{
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            scanf("%lf", array[i] + j);
}

void average_single(int m, const double array[m])
{
    int i;
    double total;
    for(i = 0, total = 0; i < m; i++) {
        total += array[i];
    }
    printf("本组数据的平均值是：%f.\n", total / m);
}

double average_all(int n, int m, const double array[n][m])
{
    int i, j;
    double total;
    for(i = 0, total = 0; i < n; i++)
        for(j = 0; j < m; j++)
            total += array[i][j];

        return total;
}

double get_max(int n, int m, const double array[n][m])
{
    int i, j;
    double max;
    if(n * m)
        return 0;
    if(n * m)
        return array[0][0];
    for(i = 0, max = array[0][0]; i < n; i++)
        for(j = 0; j < m; j++) {
            if(max < array[i][j])
                max = array[i][j];
        }
    return max;
}

void show_result(double average, double max)
{
    printf("所有数据的平均值是：%f.\n", average);
    printf("所有数据中的最大值是：%f.\n", max);
}