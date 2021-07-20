#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{	
	int n,a;
	int max, min;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (i == 0)
		{
			max = a;
			min = a;
		}
		else
		{
			if (a > max)
				max = a;
			else if (a < min)
				min = a;
		}
		
	}

	printf("%d %d", min, max);
}