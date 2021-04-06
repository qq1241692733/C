#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int DigitSum1(int n);
int DigitSum2(int n);
int main()
{
	int a=DigitSum1(1729);
	printf("%d\n",a);
	int b=DigitSum2(1729);
	printf("%d\n", b);
	system("pause");
	return 0;
}

int DigitSum1(int n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int DigitSum2(int n)
{
	if (n < 10)
		return n;
	else
		return n % 10 + DigitSum2(n / 10);
}