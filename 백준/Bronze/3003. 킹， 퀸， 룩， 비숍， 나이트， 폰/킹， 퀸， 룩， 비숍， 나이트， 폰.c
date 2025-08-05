#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int k, q, l, b, kn, p = 0;
	scanf("%d %d %d %d %d %d", &k, &q, &l, &b, &kn, &p);

	printf("%d ", 1 - k);
	printf("%d ", 1 - q);
	printf("%d ", 2 - l);
	printf("%d ", 2 - b);
	printf("%d ", 2 - kn);
	printf("%d", 8 - p);



	return 0;
}