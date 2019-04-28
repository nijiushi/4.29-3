#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 1;
	int sum = 0;
	for (i; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			sum++;
		}
	}
	printf("%d", sum);
	system("pause");
	return 0;
}
