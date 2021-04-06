#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void reverse_string1(char* arr);
void reverse_string2(char* arr);
int main()
{
	char* arr = "aqwrcvd";
	printf("%s\n",arr);
	reverse_string1(arr);
	printf("%s\n", arr);
	reverse_string2(arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}

void reverse_string1(char* arr)
{
	char *left = arr;
	char *right = arr + strlen(arr) - 1;
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void reverse_string2(char* arr)
{
	int len = strlen(arr);
	char tmp = *arr;
	*arr = *(arr + len - 1);

	*(arr + len - 1) = '\0';
	if (strlen(arr + 1) >= 2)
		reverse_string(arr + 1);

	*(arr + len - 1) = tmp;
}