#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<time.h>
#include<stdlib.h>

void main() {

	srand(time(NULL));


	int q = (rand() % 10) + 1, r;

	printf("\n������ ?�Դϴ� ", q);

	while (1)
	{

		printf("\n������ �Է��ϼ��� :");
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
			printf("�����Դϴ�.\n");
			break;
		}
	}
}