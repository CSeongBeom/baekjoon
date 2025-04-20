#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int H, M;
	scanf("%d %d", &H, &M);
	int total = 60 * H + M;
	if (total < 45)
	{
		total = 60 * 24 + total - 45;
	}
	else
	{
		total = total - 45;
	}
	
	printf("%d %d", total / 60, total % 60);

	return 0;


}