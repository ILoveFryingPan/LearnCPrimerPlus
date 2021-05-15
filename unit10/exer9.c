/*第十章 编程练习 第九题*/
#include<stdio.h>
#define N 3
#define M 5

void array_copy(int m, const double (*p)[m], double (*second)[m], int n);
void array_show(int n, int m, const double array[n][m]);

int main(void)
{
	double array[N][M] = {
		{23, 48, 90.3, 99, -78.2},
			{-8.3, -023.4, 89.3, 23.9, 33.3},
				{23.3, 25.7, 45, 32, -89}
	};
	double array_second[N][M];
	array_copy(M, array, array_second, N);
	array_show(N, M, array);
	return 0;
}

void array_copy(int m, const double(*p)[m], double (*second)[m], int n)
{
	int i, j;
	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++)
			second[i][j] = p[i][j];
}

void array_show(int n, int m, const double array[n][m])
{
	int i, j;
	printf("The array is : \n");
	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++)
			printf("%.2f \t", array[i][j]);
		putchar('\n');
	}
}