#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void Swap(int *a, int *b);
int main()
{
	int a=10;
	int b=20;
	printf("%d %d\n", a, b);
	Swap(&a, &b);
	printf("%d %d\n", a, b);
	system("pause");
	return 0;
}


void Swap(int *a,int *b)
{
	int num = *a;

	*a = *b;
	*b = num;
}