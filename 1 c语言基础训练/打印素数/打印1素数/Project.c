#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	for (int num = 100; num <= 200; num++)
	{
		int i;
		for (i = 2; i < sqrt(num); i++)
		{
			if (num%i == 0)
			{
				break;
			}
		}
		if (i>sqrt(num))
		{
			printf(" %d", num);
		}
	}
	system("pause");
	return 0;
}