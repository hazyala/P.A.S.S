#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int a;
    printf("열 개수를 입력하세요 : ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        if (i <= (a - 1) / 2)
        {
            for (int j = i; j < ((a - 1) / 2); j++)
            {
                printf("^");
            }

            for (int j = 0; j < a - 2 * ((a - 1) / 2 - i); j++)
            {
                printf("*");
            }

            for (int j = i; j < ((a - 1) / 2); j++)
            {
                printf("^");
            }
        }
        printf("\n");
    }
}