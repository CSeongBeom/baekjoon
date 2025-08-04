#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {

	char str[100];
	int num;
	scanf("%s", str);
	num = strlen(str);
	printf("%d", num);

	return 0;
}