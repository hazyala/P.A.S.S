#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	char n[100];
	printf("이름을 입력하세요: ");
	scanf("%s", n);

	int a;
	printf("나이를 입력하세요: ");
	scanf("%d", &a);

	char se[100];
	printf("성별을 입력하세요: ");
	scanf("%s", &se);

	float t;
	printf("키를 입력하세요: ");
	scanf("%f", &t);
	getchar();

	char o[50];
	printf("혈액형을 입력하세요: ");
	scanf("%s", o);
	getchar();

	char w[500];
	printf("사는 곳을 입력하세요: ");
	scanf("%s", w);
	getchar();


	printf("\n");
	printf("결과\n");
	printf("이름:");
	printf("%s\n", n);

	printf("나이:");
	printf("%d\n", a);

	printf("성별: %s\n", se);

	printf("키: %.2f cm\n", t);

	printf("혈액형: %s 형\n", o);
	printf("사는 곳: %s", w);

}