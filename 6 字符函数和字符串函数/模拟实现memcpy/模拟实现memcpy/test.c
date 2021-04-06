#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

void * my_memcpy(void * dst, void * src, size_t count);
int main()
{
	int arr1[3] = { 0, 1, 2 };
	int arr2[4] = { 0 };
	my_memcpy(arr2, arr1, sizeof(arr1));
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", arr2[i]);
	}
	system("pause");
	return 0;
}

void * my_memcpy(void * dst,void * src, size_t count)
{
	assert(dst);
	assert(src);
	void * ret = dst;
	while (count--)
	{
		*(char *)dst = *(char *)src;
		((char *)dst) ++ ;
		((char *)src) ++;
	}
	return ret;
}