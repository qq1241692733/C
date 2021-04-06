#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void Print_bit(int num);    //打印整数二进制的奇数位和偶数位
int main()
{
	Print_bit(54213);
	system("pause");
	return 0;
}

void Print_bit(int num)
{
	printf("      低位                            高位\n");
	printf("奇数位:");
	for (int i = 0; i <= 30; i += 2)   //奇数位
	{
		printf("%d ",(num>>i)&1);
	}

	printf("\n\n偶数位:");
	for (int i = 1; i <= 31; i += 2)   //偶数位
	{
		printf("%d ", (num >> i) & 1);
	}

}