#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()  //����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
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
