#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void printf_arr1(int left, int right, char arr1[]);
void printf_arr(char arr1[], int arr2[], int len, int j);
int main()
{
//	char arr1[] = "i like bajing";
	char arr1[101] = { 0 };
	int arr2[100] = { 0 };
	int j = 0;
	scanf("%s", &arr1);
	int len = sizeof(arr1) / sizeof(arr1[0]) - 1;
	for (int i = 0; i < 100; i++)
	{
		if (arr1[i] == ' ')
		{
			arr2[j] = i;
			j++;
		}
	}
	printf_arr(arr1 ,arr2, len, j);
	system("pause");
	return 0;
}

void printf_arr(char arr1[],int arr2[],int len,int j)
{
	int i = 0;
	for (i = 0; i < len ; i++)
	{
		int right = arr2[j];
		int left = arr2[j - 1];
		printf_arr1(left,right,arr1,i);
	}
}

void printf_arr1(int left,int right,char arr1[],int i)
{
	while(left < right)
	{ 
		printf("%c", arr1[right]);
		right--;
	}

	
}
