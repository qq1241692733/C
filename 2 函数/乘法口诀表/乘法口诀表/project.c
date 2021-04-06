#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void Printf_Muitable(int n);
int main()
{
	int num;
	scanf("%d",&num);
	Printf_Muitable(num);
	system("pause");
	return 0;
}

void Printf_Muitable(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j=1; j <= i;j++)
		{
			printf("%d*%d=%2d ",i,j,i*j);
		}
		printf("\n");
	}

}
