#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int A, B;
	while (1)
	{
		int result = scanf("%d %d", &A, &B);
		if (result == -1) break;
		printf("%d\n", A + B);
	}
	return 0;
}