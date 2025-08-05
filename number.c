#include <stdio.h>
#include <time.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    int random=0,try=0,guess=0;

    srand(time(NULL));
    random=rand()%100+1;

    while (1) {
        try++;
        printf("(%d) 숫자를 입력하세요:",try);
        scanf("%d",&guess);


        if (random < guess) {
            if (guess-random <=5) {
                printf("정답이 입력보다 작고 가깝습니다.\n");
            }
            else {
                printf("정답이 입력보다 작고 멂니다.\n");
            }
        }

        else if (random > guess) {
            if (random-guess <=5) {
                printf("정답이 입력보다 크고 가깝습니다.\n");
            }
            else {
                printf("정답이 입력보다 크고 멂니다.\n");
            }
        }

        else {
            printf("정답!! %d번 만에 성공했습니다!",try);
            Sleep(1000);
            break;
        }
        printf("\n\n");

    }

    return 0;
}