#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char arr[] = "              ";
	printf("%s\n", arr);
	int i = 7;
	for (int j = 0; j <= 6;j++)
	{
		arr[i - j] = '*';
		arr[i + j] = '*';
		printf("%s\n",arr);
	}
	for (int j = 6; j <= 6&j>=0;j--)
	{
		arr[i - j] = ' ';
		arr[i + j] = ' ';
		printf("%s\n", arr);
	}
	system("pause");
	return 0;
}
