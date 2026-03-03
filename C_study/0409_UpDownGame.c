#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	int q, r;

	printf("\n문제를 입력하세요 :");
	scanf("%d", &q);

	while (1)
	{

		printf("\n정답을 입력하세요 :");
		scanf("%d", &r);

		if (q < r)
		{
			printf("DOWN!");
		}

		if (q > r)
		{
			printf("UP!");
		}

		else if (q == r)
		{
			printf("정답입니다.\n");
			break;
		}
	}
}