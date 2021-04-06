#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int strlen1(char* str);
int strlen2(char* str);
int main()
{
	char *str = "asntd";
	int a=strlen1(str);
	printf("%d\n",a);
	int b = strlen2(str);
	printf("%d\n", b);
	system("pause");
	return 0;
}


int strlen1(char* str)
{
	int count = 0;
	while ('\0' != *str)
	{
		count++;
		str++;
	}
	return count;
}

int strlen2(char* str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + strlen2(++str);
}