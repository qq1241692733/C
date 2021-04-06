#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int Count_one_bit(int num);
int main()
{
	int a = 7;
	int num = Count_one_bit(a);
	printf("%d\n",num);
	system("pause");
	return 0;
}

int Count_one_bit(int num)
{
	int count = 0;
	while (num)
	{
		num = num&(num - 1);
		count++;
	}
	return count;
}