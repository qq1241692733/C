#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void Chance(int a, int b);
int main()
{
	int a = 10;
	int b = 20;
	printf("%d %d\n",a,b);
	Chance(&a, &b);
	printf("%d %d\n", a, b);
	//a = a^b;
	//b = a^b;
	//a = a^b;
	//printf("%d %d\n", a, b);
	system("pause");
	return 0;
}

void Chance(int *a, int *b)
{
	*a = *a^*b;
	*b = *a^*b;
	*a = *a^*b;
}