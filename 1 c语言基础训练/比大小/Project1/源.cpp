#include <stdio.h>
#include <stdlib.h>
int Comper_Size(int,int);
int main()
{
	int num, a, b;
	printf("��������Ҫ�Ƚϵ���������");
	scanf_s("%d %d",&a,&b);
	num=Comper_Size(a,b);
	printf("�ϴ����Ϊ��%d",num);
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
