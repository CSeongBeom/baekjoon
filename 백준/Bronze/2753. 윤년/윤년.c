#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int yy;
	int result;
	scanf("%d", &yy);

	if (yy % 4 == 0 && yy % 100 != 0)
	{
		result = 1;
	}
	else if (yy % 400 == 0)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	printf("%d", result);
	return 0;
}