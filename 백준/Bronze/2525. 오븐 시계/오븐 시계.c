#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int A, B, C;
	scanf("%d %d", &A, &B);
	scanf("%d", &C);
	int total = A * 60 + B + C;
	
	if (total >= 60 * 24)
	{
		total = total - (60 * 24);
	}
	printf("%d %d", total / 60, total % 60);


	return 0;
}