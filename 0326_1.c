#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{

	// 변수를 사용하기 위해서는 수를 정의 해야함
	// 정수(int-%d), 실수(float-%f,double-%lf), 문자(char-%c)문자열(char-%s)

	int a;
	printf("정수를 입력하세요");
	scanf("%d", &a);
	printf("%d\n", a);

	float b;
	printf("실수를 입력하세요");
	scanf("%f", &b);
	printf("%f\n", b);

	char c;
	printf("문자를 입력하세요");
	scanf("%c", &c);
	getchar();
	printf("%c", c);

	char str1[] = "문자를 입력하세요";
	printf("%s", str1);
	scanf("$s\n", str1);

	char str2[10];
	scanf("%s", str2);
	printf("%s", str2);


}
