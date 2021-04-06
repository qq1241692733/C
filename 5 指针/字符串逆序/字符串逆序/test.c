#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void Reverse_arr(char* arr, int len);
int main()
{
	char arr[] = "sfegrgw";
	printf("%s\n",arr);
	int len = sizeof(arr) / sizeof(arr[0])-1;
	Reverse_arr(arr,len);
	printf("%s\n",arr);
	system("pause");
	return 0;
}

void Reverse_arr(char* arr,int len)
{
	char* left = arr;
	char* right = arr + len-1;
	char temp = 0;
	while (left<right)
	{
		temp = *left;
		*left = *right;
		*right = temp;

		left++;
		right--;
	}
}