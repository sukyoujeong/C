#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	while (scanf("%d %d", &a, &b) != EOF)		//end of file: file의 끝을 표현하기 위해 -1로 정의된 상수
	{											//while 안에도 scanf들어 갈 수 있다잉
		printf("%d\n", a + b);
	}
}