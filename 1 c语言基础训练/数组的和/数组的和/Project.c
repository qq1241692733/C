#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<math.h>

int main()  //计算1/1 - 1/2 + 1/3 - 1/4 + …… + 1/99 - 1/100 的值，打印出结果
{
	int num = 0;
	double add = 0.0;
	for (int n = 1; n <= 100; n++)
	{
		add += pow(-1, n - 1) / n;
	}
	printf("%1f\n", add);
	system("pause");
	return 0;
}

