#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int n,i;
	char S[100] = { 0 };
	int num[26] = { 0 };
	
	scanf("%s", &S);
	n = strlen(S);

	

	for (int j = 97; j < 123; j++)
	{
		int cnt = 0;


		for (i = 0; i < n; i++)
		{
			if (S[i] == j)
			{
				num[j - 97] = cnt;
				break;
			}
			
			else
			{
				cnt++;
				num[j-97] = -1;
			}
		}
	}

	for (int k = 0; k < 26; k++)
	{
		printf("%d ", num[k]);
	}

}