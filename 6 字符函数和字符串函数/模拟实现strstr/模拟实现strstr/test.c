#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

char * my_strstr(const char * str1, const char * str2);
int main()
{
	char * str1 = "abcdef";
	char * str2 = "def";
	char * a=my_strstr(str1, str2);
	printf("%c\n",*a);
	system("pause");
	return 0;
}

char * my_strstr(const char * str1,const char * str2)
{
	assert(str1);
	assert(str2);

	char *strat = (char*)str1;
	char *p2 = (char*)str2;
	char *p1 = NULL;

	if (*str2 == '\0')
		return NULL;

	while (*strat)
	{
		p1 = strat;
		while (*p1 && *p2 && (*p1 == *p2))
		{
			p1++;
			p2++;
		}
		if (*p2 == 0)
			return strat;
		strat++;
		p2 = str2;
		if (strat == 0)
			return NULL;
	}
}
