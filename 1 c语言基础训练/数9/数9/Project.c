#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()     //��1�� 100 �����������г��ֶ��ٸ�����9
{
	int count = 0;
	for (int num = 1; num <= 100; num++)
	{
		if (num / 10 == 9 || num % 10 == 9)
		{
			count++;
		}
	}
	printf("1�� 100 �����������г����� %d ������9\n", count);
	system("pause");
	return 0;
}

