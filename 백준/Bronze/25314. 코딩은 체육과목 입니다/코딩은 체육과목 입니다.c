#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	int a = N / 4;
	
	for (int i = 0; i < a; i++) printf("long ");
	printf("int");
	return 0;
}
