#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int A, B, C;
	int reward = 0;
	scanf("%d %d %d", &A, &B, &C);
	if (A <= 6 && B <= 6 && C <= 6 && A > 0 && B > 0 && C > 0)
	{
		if (A == B && A == C && B == C)
		{
			reward = 10000 + (A * 1000);

		}
		else if (A == B)
		{
			reward = 1000 + (A * 100);

		}
		else if (B == C)
		{
			reward = 1000 + (B * 100);

		}
		else if (A == C)
		{
			reward = 1000 + (A * 100);

		}
		else
		{
			if (A > B && A > C)
			{
				reward = A * 100;
			}
			else if (B > A && B > C)
			{
				reward = B * 100;
			}
			else if (C > A && C > B)
			{
				reward = C * 100;
			}
		}
	}
	printf("%d", reward);
	return 0;
}