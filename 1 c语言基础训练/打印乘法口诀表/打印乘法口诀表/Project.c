#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main()  //����Ļ�����9*9�˷��ھ���
{
	int num;
	for (int i = 1; i <= 9;i++)
	{
		for (int j = 1; j <= i; j++)
		{
			num = i*j;
			printf("%d*%d=%2d ", i, j, num);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

