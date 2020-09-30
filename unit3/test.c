/*test.c--编程练习题*/
#include<stdio.h>

int main(void)
{
	char c;
	float num;
	char age;
	float age_second;
	int quart;		/*夸脱，水的单位*/
	double num_molecule;	/*分子的数量*/
	
	printf("input a char:__\b\b");
	
	scanf("%d", &c);
	
	printf("The char is: %c\n", c);
	
	getchar();
	getchar();
	
	printf("\aStartled by the sudden sound, Sally shouted,\n\"By the Great Pumpkin, what was that!\"\n");
	
	printf("Enter a floating-point value:	");
	scanf("%f", &num);
	
	printf("\nfixed-point notation:	%f\n", num);
	
	printf("exponential notation:	%e\n", num);
	
	printf("p notation:	%a\n", num);
	
	printf("Enter your age:	");
	
	scanf("%d", &age);
	
	age_second = 3.156e7 * age;
	
	printf("\nage_second is:	%e\n", age_second);
	
	printf("Enter the num of quart:	");
	
	scanf("%d", &quart);
	
	num_molecule = quart * 950 / 3.0e-23;
	
	//num_molecule = 1 / 3.0e-23;
	
	printf("\nThe %d quart has %e num_molecule.\n", quart, num_molecule);
	
	return 0;
}