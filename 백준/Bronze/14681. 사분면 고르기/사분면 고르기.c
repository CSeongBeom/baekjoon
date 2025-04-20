#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int x, y, quadrant;
	scanf("%d", &x);
	scanf("%d", &y);
	if (x > 0)
	{
		if (y > 0)
		{
			quadrant = 1;
		}
		else if (y < 0)
		{
			quadrant = 4;
		}
	}
	else if (x < 0)
	{
		if (y > 0)
		{
			quadrant = 2;
		}
		else if (y < 0)
		{
			quadrant = 3;
		}
	}
	printf("%d", quadrant);
	return 0;
}