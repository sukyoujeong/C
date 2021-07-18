#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{
	int n, t;
	int a;

	scanf("%d%d",&n, &t);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);		//엔터는 받고 넘어가고 스페이스바는 다받고 넘어가는..?
		if (a < t)
			printf("%d ", a);
		else
			continue;
	}


}