#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void Show_arr(int arr[], int len);
int main()
{
	int arr[] = { 4, 5, 3, 2, 1, 7 };
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len-1; i++)
	{
		int flag=1;
		for (int j = 1; j < len-i ; j++)
		{
			if (arr[j-1]>arr[j])
			{
				int num = arr[j-1];
				arr[j-1] = arr[j ];
				arr[j] = num;
				flag = 0;
			}
		}
		if (flag)
		{
			Show_arr(arr, len);
			system("pause");
			return 0;
		}
	}
	Show_arr(arr,len);
	system("pause");
	return 0;
}

void Show_arr(int arr[],int len)
{
	int i = 0;
	for (i; i <  len; i++)
	{
		printf("%d ", arr[i]);

	}
}