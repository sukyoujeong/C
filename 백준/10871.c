#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{
	int n, t;
	int a;

	scanf("%d%d",&n, &t);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);		//���ʹ� �ް� �Ѿ�� �����̽��ٴ� �ٹް� �Ѿ��..?
		if (a < t)
			printf("%d ", a);
		else
			continue;
	}


}