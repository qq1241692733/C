#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//void Fuc(int *a, int*b);\
//int Fac1(int n);
//int Fac2(int n);
//void Printf_Muitable(int n);
//void PrintNum(int n);
int main()
{

	int a = Fac1(9);
	int b = Fac2(9);
	printf("%d %d\n", a, b);
	//int n = 0;
	//scanf("%d", &n);
	//PrintNum(n);
	//Printf_Muitable(9);
	//int a = 10;
	//int b = 20;
	//printf("%d %d\n", a, b);
	//Fun(&a, &b);
	//printf("%d %d",a,b);
//	char *p = "hello";
	//printf("%d",*p);
	system("pause");
	return 0;
}

//int Fac1(int n)
//{
//	int ret = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 0;
//	else return n*Fab(n - 1);
}
//void PrintNum(int n)
//{
//	if (n > 9)
//		PrintNum(n / 10);
//	printf("%d ", n%10);
//
//}
//
//void Printf_Muitable(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//void Fun(int *a,int*b)
//{
//	//int tmp = *a;
//	//*a = *b;
//	//*b = tmp;
//
//
//	*a = *a^*b;
//	*b = *a^*b;
//	*a = *b^*a;
//
//}

