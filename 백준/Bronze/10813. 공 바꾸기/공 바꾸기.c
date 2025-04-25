#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void change(int *pa, int *pb);
int main(void)
{
	int N, M;
	scanf("%d %d", &N, &M);
	int* ary = (int*)malloc(sizeof(int) * N);
	int i, j;
	//초기화
	for(int A = 0; A < N;A++)
	{
		ary[A] = A + 1;
	}

	for (int a = 0; a < M ;a++)
	{
		scanf("%d %d", &i, &j);
		change(&ary[i - 1], &ary[j - 1]);
	}
		for (int a = 0; a < N; a++)
		{
			printf("%d ", ary[a]);
		}


	return 0;
}

void change(int *pa, int *pb)
{
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
	//printf("%d %d\n", *pa, *pb);
}