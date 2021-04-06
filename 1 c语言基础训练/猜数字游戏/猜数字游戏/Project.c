#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void play_Game();
void mean();

int main()   //猜数字游戏
{
	int a;
	srand((unsigned)time(NULL));    //随机数
	do
	{
		mean();
		printf("请选择 > ");
		scanf("%d",&a);
		switch (a)
		{
		case 1:
			play_Game();
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重新选择：\n\n\n");
			break;
		}
	} while (a);
	return 0;
}

void mean()    
{
	printf("**************************\n");
	printf("********猜数字游戏********\n");
	printf("*******输入1   PLAY*******\n");
	printf("******输入0 退出游戏******\n");
	printf("**************************\n\n\n");
}

void play_Game()
{
	int temp;
	int num = rand() % 100 + 1;     //生产0-100的随机数
	while (1)
	{
		printf("请输入猜的数字：");
		scanf("%d", &temp);
		if (temp > num)
			printf("猜大了\n\n");
		else if (temp < num)
			printf("猜小了\n\n");
		else
		{
			printf("猜对了\n\n");
			break;
		};
	}
}

