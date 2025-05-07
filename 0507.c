#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<time.h>
#include<stdlib.h>

void main() 
{
	int n[3];

	srand ((int) time (NULL));

	while (1)
	{
		for (int i = 0; i < 3; i++) 
		{
			n[i] = rand() % 3 + 1;
		}
		
		printf("%d %d %d", n[0], n[1], n[2]);
		
		if (n[0] == n[1] && n[1] == n[2])
		{
			printf("\n 축하합니다!");
			break;
		}
		getchar();			
	}
}