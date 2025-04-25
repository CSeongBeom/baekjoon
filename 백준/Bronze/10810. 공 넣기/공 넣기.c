#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N, M;
	scanf("%d %d", &N, &M);
	int* ary = (int*)malloc(sizeof(int) * N);
	int i, j, k;
	//배열 초기화
	for (int a = 0; a < N; a++)
	{
		ary[a] = 0;
	}

	for (int a = 0; a < M; a++)
	{
		scanf("%d %d %d", &i, &j, &k);
		for (int b = i - 1; b < j; b++)
		{
			ary[b] = k;
		}
		//for (int a = 0; a < N; a++) printf("%d", ary[a]);
	}
	//출력
	for (int a = 0; a < N;a++)
	{
		printf("%d ", ary[a]);
	}
	free(ary);
	return 0;
}