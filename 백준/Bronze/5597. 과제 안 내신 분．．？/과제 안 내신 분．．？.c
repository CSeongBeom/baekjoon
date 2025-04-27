#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int ary[30] = { 0 };
	int a;
	for (int i = 0; i < 28; i++)
	{
		scanf("%d", &a);
		ary[a-1] = a;
	}
	for (int j = 0; j < 31; j++)
	{
		if (ary[j] == 0)
		{
			printf("%d\n", j + 1);
		}
	}

	return 0;
}