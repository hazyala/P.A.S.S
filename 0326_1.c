#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{

	// ������ ����ϱ� ���ؼ��� ���� ���� �ؾ���
	// ����(int-%d), �Ǽ�(float-%f,double-%lf), ����(char-%c)���ڿ�(char-%s)

	int a;
	printf("������ �Է��ϼ���");
	scanf("%d", &a);
	printf("%d\n", a);

	float b;
	printf("�Ǽ��� �Է��ϼ���");
	scanf("%f", &b);
	printf("%f\n", b);

	char c;
	printf("���ڸ� �Է��ϼ���");
	scanf("%c", &c);
	getchar();
	printf("%c", c);

	char str1[] = "���ڸ� �Է��ϼ���";
	printf("%s", str1);
	scanf("$s\n", str1);

	char str2[10];
	scanf("%s", str2);
	printf("%s", str2);


}
