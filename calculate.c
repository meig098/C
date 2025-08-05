#include <stdio.h>
#include <windows.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b == 0) {
        return 0;
    }
    return (float)a / b;
}

int main() {
    SetConsoleOutputCP(65001);
    int first = 0, second = 0, mode = 0;
    float result = 0;

    printf("간단한 정수 계산기 입니다!\n");
    while (1){
    printf("1.더하기, 2.빼기, 3.곱하기, 4.나누기, 5.종료 : ");
    scanf("%d", &mode);
    printf("\n\n");

    if (mode == 1 || mode == 2 || mode == 3 || mode == 4) {
        printf("\n첫 수: ");
        scanf("%d", &first);
        printf("\n두번째 수: ");
        scanf("%d", &second);

        switch (mode) {
            case 1:
                result = add(first, second);
                printf("값: %.0f\n", result);
                break;
            case 2:
                result = subtract(first, second);
                printf("값: %.0f\n", result);
                break;
            case 3:
                result = multiply(first, second);
                printf("값: %.0f\n", result);
                break;
            case 4:
                if (second == 0) {
                    printf("0으로 나눌 수 없습니다.\n");
                } else {
                    result = divide(first, second);
                    printf("값: %.2f\n", result); 
                }
                break;
        }
    }else if(mode==5){
        printf("종료합니다");
        return 0;
    }else {
        printf("잘못된 입력입니다.");
    }

    }


}
