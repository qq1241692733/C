#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

void my_strcpy(char * destination, const char * source);
int main()
{
	char * str = "hello";
	char arr[10];   //1
	my_strcpy(arr, str);
	printf("%s\n",arr);
	system("pause");
	return 0;
}

void my_strcpy(char * destination,const char * source)
{
	assert(destination != NULL);
	assert(source!=NULL);
	while (*destination)
	{
		*destination = *source;
		destination++;
		source++;
	}
}