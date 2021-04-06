#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int My_strlen(char *str);
int main()
{
	char *str = "hello";
	printf("%s\n", str);
	int len=My_strlen(str);
	printf("%d",len);

	system("pause");
	return 0;
}

int My_strlen(const char *str)
{
	const char *p = str;
	while (*p != 0)
	{
		p++;
	}
	return p - str;
}