#include <stdio.h>
int main(void)
{
	int N, M;
	scanf("%d %d", &N, &M);
	int array1[N][M];
	int array2[N][M];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			scanf("%d", &array1[i][j]);
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			scanf("%d", &array2[i][j]);
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("%d ", array1[i][j] + array2[i][j]);
		}
	}

	return 0;
}