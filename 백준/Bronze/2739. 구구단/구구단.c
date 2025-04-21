#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a;
    scanf("%d", &a);
	if (a > 0 && a < 10)
	{
		
		for (int i = 1; i < 10; i++)
		{
			printf("%d * %d = %d\n", a, i, a * i);
		}
	}
	return 0;
}