#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n = 2;
	int count = 0;
	for (int i = 0; i <= n; i++)
	
		for (int j = 0; j <= i; j++)
		
			count++;
		
	
	printf("%d",count);

	system("pause");
	return 0;
}
