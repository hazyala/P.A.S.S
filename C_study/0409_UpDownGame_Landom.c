#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<time.h>
#include<stdlib.h>

void main() {

	srand(time(NULL));


	int q = (rand() % 10) + 1, r;

	printf("\n문제는 ?입니다 ", q);

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