#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int int_cmp(const void *p1, const void *p2);
void _swap(void *p1, int size);
void myqsort(void *base, int count, int size, int(*cmp)(void *, void *));
int main()
{
	int arr[] = {1,3,8,4,7,9,0,2,5,6};
	int i = 0;
	myqsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d",arr[i]);
	}
	system("pause");
	return 0;
}


void myqsort(void *base, int count,int size, int(*cmp)(void *, void *))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < count - 1; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			if (cmp((char *)base+j*size,(char *)base+(j+1)*size)>0)
			{
				_swap((char *)base + j*size, (char *)base + (j + 1)*size, size);
			}
		}

	}

}

int int_cmp(const void *p1, const void *p2)
{
	return (*(int *)p1 - *(int *)p2);
}

void _swap(void *p1,int size)
{
	int i = 0;
	for (i = 0; i < size;i++)
	{
		char tmp = *((char *)p1 + i);
	}
}