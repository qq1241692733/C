#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 100;
	int b = 25;
	int c = 0;

	while (c = a%b)
	{
		a = b;
		b = c;
	}
	printf("%d\n", b);
	system("pause");
	return 0;
}
