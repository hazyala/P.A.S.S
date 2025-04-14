#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int a;
    printf("층을 입력하세요 : ");
    scanf("%d", &a);

    for (int i = 0; i < (a / 2) + 1; i++)
    {
        for (int j = i; j < (a / 2); j++)
        {
            printf("^");
        }

        for (int j = 0; j <= i * 2; j++)
        {
            printf("*");
        }

        for (int j = i; j < (a / 2); j++)
        {
            printf("^");
        }

        printf("\n");
    }

    for (int i = 0; i < a / 2; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("^");
        }
        for (int j = i; j < (a - i) - 2; j++)
        {
            printf("*");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("^");
        }
        printf("\n");
    }
}