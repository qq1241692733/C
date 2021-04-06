#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void Print_arr(arr, len);
int main()
{
	int arr[3] = {1,2,3};
	int len = sizeof(arr) / sizeof(arr[0]);
	Print_arr(arr,len);
	system("pause");
	return 0;
}

void Print_arr(arr, len)
{
	int* p = arr;
	for (int i = 0; i < len;i++)
	{
		printf("%d ",*(p+1));
	
	}
}