#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main()
{
	int a;
	char b[101];
	int c;

	int sum = 0;
	scanf("%d", &a);
	scanf(" %s", &b);

	for (int i = 0; i < a; i++)
	{
		sum += b[i] - '0';		//�׳� ���ϸ� �ƽ�Ű�ڵ�........�ϱ� '0'�� ���༭ ���ڷ� �����!!!!!
	}

	
	printf("%d", sum);
}
