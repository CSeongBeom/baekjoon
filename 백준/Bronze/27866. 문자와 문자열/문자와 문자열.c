#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	char str[1000];
	int num = 0;
	scanf("%s", str);
	scanf("%d", &num);

	printf("%c", str[num - 1]);

	return 0;
}