////判断一个数是否为奇数
////输出1-100之间的奇数
#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//	{
//		printf("%d是奇数\n", a);
//	}
//	return 0;
//}
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

#include<stdio.h>
int main()
{
	int ret=0;
	int ch = 0;
	char password[20] = { 0 };
	printf("请输入密码：");
	scanf("%s", &password);
	while((ret=getchar())!='\n')//getchar:去\n !=优先级比=高，所以用括号
	{
		;
	}
	printf("请确定(Y\N)：");
	ch = getchar();
	if(ch=='Y')
	{
		printf("确定输出\n");
	}
	else
	{
		printf("放弃输出\n");
	}

	return 0;
}