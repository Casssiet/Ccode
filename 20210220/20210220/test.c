////�ж�һ�����Ƿ�Ϊ����
////���1-100֮�������
#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//	{
//		printf("%d������\n", a);
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
	printf("���������룺");
	scanf("%s", &password);
	while((ret=getchar())!='\n')//getchar:ȥ\n !=���ȼ���=�ߣ�����������
	{
		;
	}
	printf("��ȷ��(Y\N)��");
	ch = getchar();
	if(ch=='Y')
	{
		printf("ȷ�����\n");
	}
	else
	{
		printf("�������\n");
	}

	return 0;
}