#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	long long N, num, min, max;
	scanf("%lld", &N);
	for(int i = 0; i < N; i++)
	{
		scanf("%lld", &num);
		if (i == 0)
		{
			max = num;
			min = num;
		}
		if (num > max) max = num;
		else if (num < min) min = num;
	}
	printf("%d %d", min, max);


	return 0;
}