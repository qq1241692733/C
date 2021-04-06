#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int Pow1(int n, int k);
int Pow2(int n, int k);
int main()
{
	int a = Pow1(2, 3);
	printf("%d\n", a);
	int b = Pow2(2, 3);
	printf("%d\n", b);
	system("pause");
	return 0;
}

int Pow1(int n,int k)
{
	int ret = 1;
	for (int i = 0; i < k;i++)
	{
		ret *= n;
	}
	return ret;
}

int Pow2(int n, int k)
{
	if (k == 0)
		return 1;
	return n*Pow2(n, k - 1);
}
