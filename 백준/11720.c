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
		sum += b[i] - '0';		//그냥 더하면 아스키코드........니까 '0'을 빼줘서 숫자로 만들기!!!!!
	}

	
	printf("%d", sum);
}
