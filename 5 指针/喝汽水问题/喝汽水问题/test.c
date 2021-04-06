#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()  //喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
{
	int j = 20;
	for (int i = 1; i <= j; i++)
	{
		if (i % 2 == 0)
			j++;
	}
	printf("%d\n",j);
	system("pause");
	return 0;
}
