#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c;
	int m;
	int num[10];
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9};
	int n[10] = { 0 };

	scanf("%d%d%d", &a, &b, &c);
	m = a * b * c;

	while(m>0)
	{
		int i = 0;
		num[i] = m % 10;
		m = m / 10;
		if (m < 0)
			break;

		for (int j = 0; j < 10; j++)
		{
			if (num[i] == arr[j])
			{
				n[j] = n[j] + 1;
				break;
			}

			else
				continue;

		}
		i++;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", n[i]);
	}

}