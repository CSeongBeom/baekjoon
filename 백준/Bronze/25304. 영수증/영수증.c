#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int N, X;
	scanf("%d", &N);
	scanf("%d", &X);

	int a, b;
	int cal_total = 0;


	for (int i = 0; i < X; i++)
	{
		scanf("%d %d", &a, &b);
		cal_total = cal_total + (a * b);
	}
	if (N == cal_total)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}


	return 0;
}