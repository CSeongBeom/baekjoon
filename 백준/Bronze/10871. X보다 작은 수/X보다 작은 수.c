#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int N, X, A;
	int j = 0;
	
	scanf("%d %d", &N, &X);
	int *ary = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A);
		ary[i] = A;
		if (ary[i] < X)
		{
			j = j + 1;
		}
	}
	int* res_ary = (int*)malloc(sizeof(int) * j);
	int k = 0;
	for (int i = 0; i < N; i++)
	{
		if (ary[i] < X)
		{
			res_ary[k] = ary[i];
			k++;
		}
	}
	for (int i = 0; i < k; i++)
	{
		printf("%d ", res_ary[i]);
	}
	free(res_ary);
	free (ary);
	return 0;
}