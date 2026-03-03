#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	for (int i = 1; i <= 9; i++) {
		printf("%d´Ü\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d*%d=%d\n", i, j, i * j);
		}
		printf("\n");
	}
}