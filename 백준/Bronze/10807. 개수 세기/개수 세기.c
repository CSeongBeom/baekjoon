#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int N, find_num;
	int result_num = 0;
	scanf("%d", &N);
	//int ary[N]; 변수 사용 안댐;
	int ary[101];
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &ary[i]);
	}
	scanf("%d", &find_num);
	for (int i = 0; i < N; i++)
	{
		//printf("%d", ary[i]);
		if (ary[i] == find_num) result_num++;
	}
	printf("%d", result_num);

	return 0;
}
