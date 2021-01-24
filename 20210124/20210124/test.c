#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1;
	int num2;
	int num3;
	int sum;
	int minus;
	scanf("%d,%d,%d", &num1, &num2, &num3);
	sum = num1 + num2 + num3;
	minus = num1 - num2;
	printf("sum=%d\n", sum);
	printf("minus=%d\n", minus);
	return 0;
}