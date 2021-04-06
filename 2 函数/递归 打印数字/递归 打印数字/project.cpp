#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void print(unsigned int n);
int main()
{
	unsigned int num;
	scanf("%d", &num);
	print(num);
	system("pause");
	return 0;
}

void print(unsigned int n)
{
	if (n>9)
		print(n / 10);
	printf("%d ", n % 10);
}
