#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int count = 0;
	int b, c, d;
	
	
	
	scanf("%d", &a);
	b = a / 10;
	c = a % 10;
	d = (b + c) % 10;
	count++;
	if (10 * c + d == a)
	{
		printf("%d", count);
		return 0;
	}

	



	while (1)
	{

		c = (c + d) % 10;
		count++;
		if (10 * d + c == a )
			break;
		d = (d + c) % 10;
		count++;
		if ( 10 * c + d == a)
			break;


		
	}
	printf("%d", count);
}