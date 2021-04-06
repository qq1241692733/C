#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int Calc_diff_bit(int a, int b);
int main()
{
	int m = 1999;
	int n = 2299;
	int num=Calc_diff_bit(m, n);
	printf("不同位的个数：%d\n",num);
	system("pause");
	return 0;
}

int Calc_diff_bit(int a,int b)
{
	int tmp = a^b;
	int t = 0;
	while (tmp)
	{
		tmp = tmp&(tmp - 1);
		t++;
	}
	return t;
}