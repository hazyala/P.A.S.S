#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int a;
    printf("�� ������ �Է��ϼ��� : ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = i; j < a - 1; j++)
        {
            printf("^");
        }

        for (int j = 0; j <= i * 2; j++)
        {
            printf("*");
        }

        for (int j = i; j < a - 1; j++)
        {
            printf("^");
        }
        printf("\n");
    }

}