#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	int sum,add;
	char ox[80];

	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		sum = 0, add = 1;
		scanf("%s", ox);
	
		for (int j = 0; j < strlen(ox); j++)
		{
			if (ox[j] == 'O')
			{
				sum += add;
				add++;

			}
			else
				add = 1;


		}
		printf("%d\n", sum);
	}
}	