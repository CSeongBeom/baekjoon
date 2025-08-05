#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c, longline, shortline1, shortline2;
	while (1)
	{
		scanf("%d %d %d", &a, &b, &c);
		if (a > b && a > c)
		{
			longline = a;
			shortline1 = b;
			shortline2 = c;
		}
		else if (b > a && b > c)
		{
			longline = b;
			shortline1 = a;
			shortline2 = c;
		}
		else if (c > a && c > b)
		{
			longline = c;
			shortline1 = a;
			shortline2 = b;
		}
		else if (a == 0 && b == 0 && c == 0)
		{
			break;
		}
		if (longline * longline == (shortline1 * shortline1 + shortline2 * shortline2))
		{
			printf("right\n");
		}
		else
		{
			printf("wrong\n");
		}
	}

	return 0;
}