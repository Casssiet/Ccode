#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1;
	int num2;
	int num3;
	int sum;
	scanf("%d,%d,%d", &num1, &num2, &num3);
	sum = num1 + num2 + num3;
	printf("sum=%d\n", sum);
	return 0;
}