#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


int main()       //��д������һ���������������в��Ҿ����ĳ����
{
	int mid;
	int num;
	printf("������Ҫ���ҵ�����");
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
			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
			break;
		}

	}
	if (left>right)
		printf("û�ҵ�");
	system("pause");
	return 0;
}