#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

long long Fac1(int N);
long long Fac2(int N);
int main()

{
	int a=Fac1(3);
	printf("%d\n",a);
	int b = Fac2(3);
	printf("%d\n", b);
	system("pause");
	return 0;
}

long long Fac1(int N)
{
	if (N <= 1)
		return 1;

	return Fac1(N - 1)*N;
}


long long Fac2(int N)
{
	long long ret = 1;
	for (int i = 2; i <= N; ++i)
	{
		ret *= N;
	}
	return ret;
}