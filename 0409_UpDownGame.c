#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	int q, r;

	printf("\n������ �Է��ϼ��� :");
	scanf("%d", &q);

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