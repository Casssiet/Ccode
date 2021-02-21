//數呾n腔論傚
//數呾1ㄐ+2ㄐ+...+n!
#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int ret = 1;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("ret=%d\n", ret);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//數呾1ㄐ+2ㄐ+...+10!
#include<stdio.h>
int main()
{
	int n = 10;
	int ret = 1;
	int sum = 0;
	for (int i = 1; i<= n; i++)
	{
		ret = ret * i;
		sum = sum + ret;
	}
	printf("ret=%d\n", ret);
	printf("sum=%d\n", sum);
	return 0;
}
