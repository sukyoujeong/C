#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	while (scanf("%d %d", &a, &b) != EOF)		//end of file: file�� ���� ǥ���ϱ� ���� -1�� ���ǵ� ���
	{											//while �ȿ��� scanf��� �� �� �ִ���
		printf("%d\n", a + b);
	}
}