#include <stdio.h>
#include <stdlib.h>
int Comper_Size(int,int);
int main()
{
	int num, a, b;
	printf("请输入你要比较的两个数：");
	scanf_s("%d %d",&a,&b);
	num=Comper_Size(a,b);
	printf("较大的数为：%d",num);
	//system("pause");
	return 0;
}

int Comper_Size(int a,int b)
{
	if (a > b)
		return a;
	else
		return b;

}
