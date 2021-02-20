////判断一个数是否为奇数
////输出1-100之间的奇数
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (a % 2 == 1)
	{
		printf("%d是奇数\n", a);
	}
	return 0;
}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	/*while (i <= 100)
//	{
//		printf("%d\t", i);
//		i += 2;
//	}*/
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d\t", i);
//		}
//		i++;
//	}
//	return 0;
//}
