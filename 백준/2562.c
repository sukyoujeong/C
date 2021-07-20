#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[9];
	int max;
	int n;


	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 9; i++)
	{
		if (i == 0)
			max = a[0];
		else
		{
			if (a[i] > max)
			{
				max = a[i];
				n = i + 1;
			}
		}
	}
	printf("%d\n", max);
	printf("%d", n);
}