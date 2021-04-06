#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void fun();
int main()
{
	fun();
	system("pause");
	return 0;
}


void fun()
{
	for (int num = 100; num <= 200; num++)
	{
		int i;
		for (i = 2; i < sqrt(num); i++)
		{
			if (num%i == 0)
			{
				break;
			}
		}
		if (i>sqrt(num))
		{
			printf(" %d", num);
		}
	}

}




