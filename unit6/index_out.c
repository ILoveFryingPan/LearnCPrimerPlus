/*测试越界数组的元素的值*/
#include<stdio.h>
int main(void)
{
	int nums[5];

	int i, *p;
	for(i = 0; i < sizeof(nums); i++)
	{
		nums[i] = i * 5;
	}

	p = &nums[4];
	for(i = 1; i <= 5; i++)
	{
		*(p + i) = 30 + i * 5;
	}
	for(i = 0; i <10; i++)
	{	
		//该循环已经数组越界了，但是执行的时候不报错，会在return时报错
		printf("result is : %5d ", nums[i]);
	}
	printf("Done!\n");
	return 0;
}
