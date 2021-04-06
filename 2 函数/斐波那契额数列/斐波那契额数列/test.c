#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int Fab1(int n);
int Fab2(int n);
int main()
{
	int a = Fab1(10);
	printf("%d\n",a);

	int b = Fab2(10);
	printf("%d\n", b);
	system("pause");
	return 0;
}

int Fab1(int n)
{
	if (n < 3)
		return 1;
	return Fab1(n - 1) + Fab1(n - 2);
}

int Fab2(int n)
{
	int fn = 1;
	int fn1 = 1;
	int fn2 = 1;

	for (int i = 3; i <= n; i++)
	{
		fn = fn1 + fn2;
		fn2 = fn1;
		fn1 = fn;
	}
	return fn;
}