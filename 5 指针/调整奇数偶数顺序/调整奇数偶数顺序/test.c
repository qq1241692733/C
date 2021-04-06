#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void swap_arr(int arr[], int sz);
void Printf_arr(int arr[], int len);
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Printf_arr(arr, len);
	swap_arr(arr,len);
	Printf_arr(arr, len);
	system("pause");
	return 0;
}
void swap_arr(int arr[], int len)
{
	int left = 0;
	int right = len - 1;
	int tmp = 0;

	while (left<right)
	{
		while ((left<right) && (arr[left] % 2 == 0))
		{
			left++;
		}
		while ((left<right) && (arr[right] % 2 == 1))
		{
			right--;
		}
		if (left<right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

void Printf_arr(int arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n ");
}