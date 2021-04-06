#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>



void Printf_arr(int arr[], int len);
void Init_arr(int arr[], int len);
void Reverse_arr(int arr[], int len);

int main()
{
	int arr[] = {1,2,3,4,5,6};
	int len = sizeof(arr) / sizeof(arr[0]);
	Printf_arr(arr, len);
	Init_arr(arr, len);
	Reverse_arr(arr, len);
	system("pause");
	return 0;
}


void Printf_arr(int arr[],int len)
{
	for (int i = 0; i <=len-1; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n\n");
}

void Init_arr(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		arr[i] = 0;
	}
	Printf_arr(arr, len);
}


void Reverse_arr(int arr[], int len)
{
	int num;
	for (int i = 0; i<=len; i++)
	{
		num = arr[i];
		arr[i] = arr[len];
		arr[len] = num;
		len--;
	}
	Printf_arr(arr, len);
}