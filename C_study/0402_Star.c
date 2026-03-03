#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int array[50];
//
//	for (int i = 0; i < 50; i++)
//	{
//		array[i]=i;
//		printf("%d", array[i]);
//	}
//
//}

void main()
{
	/*for (int i = 1; i <= 5; i++)
	{
		for (int j = i; j <= 5; j++)
		{
			printf("*");
		}
	printf("\n");

	}*/

	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");

		for (int j = 0; j <= i; j++)
		{
			printf(" ");
		}
	}

	printf("\n");

	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 4; j++)
		{
			printf(" ");
		}

		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}

		printf("\n");

	}

}