#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

char* My_strcpy(char *str, char *src);
int main()
{
	const char *src = "hello";
	char *str = (char*)malloc(strlen(src) + 1);
	printf("%s\n",src);
	My_strcpy(str,src);
	printf("%s\n", str);
	system("pause"); 
	return 0;
}

char* My_strcpy(char *str,char *src)
{
	assert((str != NULL) && (src != NULL));
	char* p = str;
	while (*p++ = *src++);
	return p;
}