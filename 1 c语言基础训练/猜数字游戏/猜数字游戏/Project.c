#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void play_Game();
void mean();

int main()   //��������Ϸ
{
	int a;
	srand((unsigned)time(NULL));    //�����
	do
	{
		mean();
		printf("��ѡ�� > ");
		scanf("%d",&a);
		switch (a)
		{
		case 1:
			play_Game();
			break;
		case 0:
			break;
		default:
			printf("ѡ�����������ѡ��\n\n\n");
			break;
		}
	} while (a);
	return 0;
}

void mean()    
{
	printf("**************************\n");
	printf("********��������Ϸ********\n");
	printf("*******����1   PLAY*******\n");
	printf("******����0 �˳���Ϸ******\n");
	printf("**************************\n\n\n");
}

void play_Game()
{
	int temp;
	int num = rand() % 100 + 1;     //����0-100�������
	while (1)
	{
		printf("������µ����֣�");
		scanf("%d", &temp);
		if (temp > num)
			printf("�´���\n\n");
		else if (temp < num)
			printf("��С��\n\n");
		else
		{
			printf("�¶���\n\n");
			break;
		};
	}
}

