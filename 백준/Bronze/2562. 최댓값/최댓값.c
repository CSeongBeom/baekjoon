#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int ary[9] = { 0 };
	int max, max_num;
	int num;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &num);
		if (i == 0)
		{
			max = num;
			max_num = 0;
		}
		if (num > max)
		{
			max = num;
			max_num = i;
		}
	}
	printf("%d %d", max, max_num + 1);
	return 0;
}