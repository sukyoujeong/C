#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{
	int t;

	scanf("%d", &t);

	for (int i = 1; i <= t; i++)
	{
		for (int j = 0; j < t; j++)
		{
			if (j >= t - i )
				printf("*");
			else
				printf(" ");
		}
		puts("");
	}


}