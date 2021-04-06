#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int year();
int main()
{
	int num;
	num=year();
	if (num==1)
		printf("是闰年\n");
	else
		printf(" %d年不是闰年\n");
	system("pause");
	return 0;
}

int year()
{
	int year;
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return 1;
	else
		return 0;
}