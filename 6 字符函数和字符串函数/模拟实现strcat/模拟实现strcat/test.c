#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

char *my_strcat(char * dest, char * src);
int main()
{
	char arr1[10] = "Hello ";
	char arr2[10] = "boge";
	my_strcat(arr1, arr2);
	printf("%s", arr1);
	system("pause");
	return 0;
}

char *my_strcat(char * dest,char * src)
{
	assert(dest!=NULL);
	assert(src != NULL);
	char * ret = dest;
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *src++);
	return ret;
}
