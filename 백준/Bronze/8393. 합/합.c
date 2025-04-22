#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n;
	int total = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		total = total + i;	
	}
	printf("%d", total);

	return 0;
}
