#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()  //��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮��
{
	int a = Sn(2);
	printf("%d\n",a);
	system("pause");
	return 0;
}

int Sn(int n)
{
	int num = 0;
	int sum = 0;
	for (int i = 0 ; i < 5; i++)
	{
		num = n + 10 * num;
		sum += num;
	}
	return sum;
}