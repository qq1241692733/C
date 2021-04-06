#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


int main()       //编写代码在一个整形有序数组中查找具体的某个数
{
	int mid;
	int num;
	printf("请输入要查找的数：");
	scanf("%d", &num);
	int arr[] = { 1, 2, 3, 4, 5,  6, 7, 8, 9, 10, 11 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right =len-1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < num)
			left = mid+1;
		else if (arr[mid]>num)
			right = mid-1;
		else
		{
			printf("找到了，下标为：%d\n", mid);
			break;
		}

	}
	if (left>right)
		printf("没找到");
	system("pause");
	return 0;
}