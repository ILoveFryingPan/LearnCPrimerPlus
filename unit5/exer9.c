/*第五章编程练习 第九题*/
#include<stdio.h>

void Temperatures(double temp);

int main(void)
{
	double temp;
	int result;
	printf("Enter a temp:");
	result = scanf("%lf", &temp);
	while(result > 0) {
		Temperatures(temp);
		printf("Enter a temp(q to quit):");
		result = scanf("%lf", &temp);
	}
	printf("Done\n");
	return 0;
}

void Temperatures(double temp)
{
	double ss, ks;
	const double convert_ks = 273.16;
	const double convert_ss_diff = 32.0;
	const double convert_ss_ratio = 5.0 / 9.0;
	ss = convert_ss_ratio * (temp - convert_ss_diff);
	ks = ss + convert_ks;
	printf("The temp %.2f is %.2f as ss, and is %.2f as ks.\n", temp, ss, ks);
}