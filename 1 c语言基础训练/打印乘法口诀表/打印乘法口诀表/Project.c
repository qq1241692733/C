#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main()  //在屏幕上输出9*9乘法口诀表
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

