#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()     //数1到 100 的所有整数中出现多少个数字9
{
	int count = 0;
	for (int num = 1; num <= 100; num++)
	{
		if (num / 10 == 9 || num % 10 == 9)
		{
			count++;
		}
	}
	printf("1到 100 的所有整数中出现了 %d 个数字9\n", count);
	system("pause");
	return 0;
}

