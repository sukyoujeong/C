#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num[10];
	int mod[10];
	int j = 0;
	int result = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
		mod[i] = num[i] % 42;
	}

	for (int i = 0; i < 10; i++) 
	{
		int count = 0; // ÃÊ±âÈ­
		for (int j = i + 1; j < 10; j++) 
		{ 
			if (mod[i] == mod[j]) 
				count++;
		}
		if (count == 0) 
			result++; 
	}

	printf("%d", result);
}