#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	char n[100];
	printf("�̸��� �Է��ϼ���: ");
	scanf("%s", n);

	int a;
	printf("���̸� �Է��ϼ���: ");
	scanf("%d", &a);

	char se[100];
	printf("������ �Է��ϼ���: ");
	scanf("%s", &se);

	float t;
	printf("Ű�� �Է��ϼ���: ");
	scanf("%f", &t);
	getchar();

	char o[50];
	printf("�������� �Է��ϼ���: ");
	scanf("%s", o);
	getchar();

	char w[500];
	printf("��� ���� �Է��ϼ���: ");
	scanf("%s", w);
	getchar();


	printf("\n");
	printf("���\n");
	printf("�̸�:");
	printf("%s\n", n);

	printf("����:");
	printf("%d\n", a);

	printf("����: %s\n", se);

	printf("Ű: %.2f cm\n", t);

	printf("������: %s ��\n", o);
	printf("��� ��: %s", w);

}