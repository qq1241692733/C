#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()    //���0��100000֮������С�ˮ�ɻ������������  д����
{
	for (int i = 0; i < 100000;i++)
	{
		int num = 0;
		int y = 0;
		int n = 0;
		int temp = i;
		while (temp)
		{
			temp /= 10;
			n++;
		}

		temp = i;
		while (temp)
		{
			num = temp % 10;
			temp /= 10;
			y = y + pow(num, n);
		}
		if (y == i)
			printf("%d ",i);
	}
	system("pause");
	return 0;
}
