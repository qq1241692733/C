#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int my_strlen(char* str);
int main()
{
	char *str = "bege";
	int len=my_strlen(str);
	printf("%d\n",len);
	system("pause");
	return 0;
}

int my_strlen(char* str)
{
	char *p = str;
	while (*str != 0)
	{
		str++;
	}
	return str - p;
}