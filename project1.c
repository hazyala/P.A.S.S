#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>  // sleep() 함수 사용을 위한 헤더파일


void main() {
   
    int color = 0;
    char input[100]; 
    
    while (1) {
        //ANSI코드(\033[)로 콘솔 출력 지정 
        printf("\033[2J"); // [2J 화면 전체 지우기
        printf("\033[H");  // [H 커서를 맨 위로 이동
        printf("※ 프로그램을 종료하려면 'Ctrl+C'를 누르세요.\n\n");

        printf("======= 신호등 =======\n");

        if (color == 0) printf("\033[32m     ●  (초록불)\n");
        else printf("\033[37m     ○  (초록불)\n");

        if (color == 1) printf("\033[33m     ●  (주황불)\n");
        else printf("\033[37m     ○  (주황불)\n");

        if (color == 2) printf("\033[31m     ●  (빨간불)\n");
        else printf("\033[37m     ○  (빨간불)\n");

        printf("\033[0m");
        printf("======================\n");

        printf("\n횡단하시겠습니까? (Y/N): ");
        scanf("%s", input);

        if (color == 0) {
            if (strcmp(input, "Y") == 0 || strcmp(input, "y") == 0)
                printf("건너가세요 :)\n");
            else if (strcmp(input, "N") == 0 || strcmp(input, "n") == 0)
                printf("왜 가만히 계시죠?\n");
            else
                printf("※ 잘못된 입력입니다. 'Y' 또는 'N'만 입력하세요.\n");

        }
        else if (color == 1) {
            if (strcmp(input, "Y") == 0 || strcmp(input, "y") == 0)
                printf("죽고싶어요?\n");
            else if (strcmp(input, "N") == 0 || strcmp(input, "n") == 0)
                printf("가만히 있군요. 지능이 정상이십니다.\n");
            else
                printf("※ 잘못된 입력입니다. 'Y' 또는 'N'만 입력하세요.\n");

        }
        else if (color == 2) {
            if (strcmp(input, "Y") == 0 || strcmp(input, "y") == 0)
                printf("사망하셨습니다.\n");
            else if (strcmp(input, "N") == 0 || strcmp(input, "n") == 0)
                printf("축하합니다. 수명이 연장되었습니다.\n");
            else
                printf("※ 잘못된 입력입니다. 'Y' 또는 'N'만 입력하세요.\n");
        }

        Sleep(5000); //sleep은 지정된 시간만큼 프로그램을 일시 정지시키는 함수
        color = (color + 1) % 3;       
    }
}