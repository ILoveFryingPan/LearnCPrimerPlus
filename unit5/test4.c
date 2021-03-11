/*第五章复习题 第四题*/
#include<stdio.h>
int main(void)
{
	int i = 1;
	float n;
	printf("Watch out! Here come a bunch of fractions!\n");
	while(i < 30) {
		n = 1.0 / i;
		printf(" %f", n);
		i++;
	}
	printf("\nThat's all, folks!\n");
	return 0;
}