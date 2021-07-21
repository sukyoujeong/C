#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int c,n,a;
	int count = 0;
	int s_cnt;
	int score[1000];
	int total;
	float average;

	scanf("%d", &c);

	while (count<c)
	{
		total = 0;
		s_cnt = 0;
		scanf("%d", &n);
		for (int i = 0; i < n;i++)
		{
			
			scanf("%d", &score[i]);
			total += score[i];
		}
		average = (float)total / n;
		for (int i = 0; i < n; i++)
		{
			if (score[i] > average)
				s_cnt++;

		}
		printf("%.3f%\n", (float)s_cnt / n * 100);
		count++;


	}

}