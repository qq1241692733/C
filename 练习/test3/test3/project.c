#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int int_cmp(const void *p1, const void *p2);
int main()
{
	int arr[] = { 1, 3, 8, 4, 7, 9, 0, 2, 5, 6 };
	int i = 0;
	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

int int_cmp(const void *p1, const void *p2)
{
	return (*(int *)p1 - *(int *)p2);
}