#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void fun1(int *a, int *b);
int main()
{
	int c = 1;
	int d = 2;
	printf("%d %d\n", c, d);
	fun1(&c, &d);
	printf("%d %d", c, d);
	//int a = (2, 4);
	//printf("%d", a);
	system("pause");
	return 0;

}



void fun1(int *a, int *b)
{
	*a = 10;
	*b = 20;
}