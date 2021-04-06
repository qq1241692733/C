#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int my_strcmp(char * str1, char * str2);
int main()
{
	char * str1 = "abcd";
	char * str2 = "abcd";
	int a = my_strcmp(str1, str2);
	printf("%d\n",a);
	system("pause");
	return 0;
}

int my_strcmp(char * str1, char * str2)
{
	assert(str1);
	assert(str2);
	int ret = 0;
	while ((*str1 == *str2)&&*str1&&*str2)
	{
		str1++;
		str2++;
	}
	if (*str1 > *str2)
		ret = 1;
	else if (*str1 < *str2)
		ret = -1;
	return ret;
}