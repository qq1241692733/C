#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void Print_bit(int num);    //��ӡ���������Ƶ�����λ��ż��λ
int main()
{
	Print_bit(54213);
	system("pause");
	return 0;
}

void Print_bit(int num)
{
	printf("      ��λ                            ��λ\n");
	printf("����λ:");
	for (int i = 0; i <= 30; i += 2)   //����λ
	{
		printf("%d ",(num>>i)&1);
	}

	printf("\n\nż��λ:");
	for (int i = 1; i <= 31; i += 2)   //ż��λ
	{
		printf("%d ", (num >> i) & 1);
	}

}