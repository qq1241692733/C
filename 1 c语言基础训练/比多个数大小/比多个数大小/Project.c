#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

//int main()    //求10 个整数中最大值 
//
//{
//	int arr[10] = { 25, 5, 17, 2, 36, 9, 44, 12, 21, 53 };
//	int max = arr[0];
//	for (int i = 1; i <= 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("最大是数为：%d\n", max);
//	system("pause");
//	return 0;
//}



int main()    //求10和数的最大值
{
	int arr[10] = { 1, 2,3,4,5,6,7,8,9,};
	int max=arr[0];
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i=1; i < len; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("%d", max);
		system("pause");
			return 0;
	return 0;
}


//int main()
//{
//	for (int i = 1; i < 9; i++)
//	{
//		for (int j = 1; j < i; j++)
//		{
//			printf("%d*%d=%d ",i,j,i*j );
//		}
//		printf("\n");
//	}
//		system("pause");
//		return 0;
//}