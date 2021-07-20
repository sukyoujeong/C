#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int max;
	int score[1000] = { 0 };
	float new_score[1000] = { 0 };
	float total=0;


	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &score[i]);
		if (i == 0)
			max = score[i];
		else
		{
			if (score[i] > max)
				max = score[i];
		}
		
	}

	for (int i = 0; i < n; i++)
	{
		new_score[i] = ((float)score[i] / max) * 100;

	}


	for (int i = 0; i < n; i++)
	{
		total += new_score[i];

	}

	printf("%f", total / n);



}