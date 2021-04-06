#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

void * my_memmove(void * dst, void * src, size_t count);
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6 };
	my_memmove(arr1+1, arr1, 16);
	for (int i = 0; i < 6; i++)
	{
		printf("%d ",arr1[i]);
	}
	system("pause");
	return 0;
}

void * my_memmove(void * dst, void * src, size_t count)
{
	assert(dst);
	assert(src);
	void * ret = dst;
	if (src >= dst)
	{
		while (count--)
		{
			*(char *)dst = *(char *)src;
			((char *)dst)++;
			((char *)src)++;
		}
	}
	else
	{
		while (count--)
		{
			*((char *)dst + count) = *((char *)src + count);
		}
	}
	return dst;
}