#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<time.h>
#include<stdlib.h>

void main()
{
	int n[999];

	srand((int)time(NULL));

	while (1)
	{
		printf("++++++++ 달려라 잭팟 게임!++++++++");

		for (int i = 0; i < 999; i++)
		{
			n[i] = rand() % 999 + 1;
		}

		printf("%03d %03d %03d", n[0], n[1], n[2]);

		if (n[0] == n[1] && n[1] == n[2])
		{
			printf("\n 잭팟!");
			break;
		}
		getchar();
	}
}