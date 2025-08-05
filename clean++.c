#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

DWORD WINAPI burn_cpu(LPVOID lpParam) {
    long long i = 1;
    while (1) {
        for (int j = 0; j < 1000000; j++) {
            i *= j + 1;
            i = sqrt(i);
        }
    }
    return 0;
}

DWORD WINAPI burn_ram(LPVOID lpParam) {
    while (1) {
        void* ptr = malloc(500000);
    }
    return 0;
}

int main() {
    CreateThread(NULL, 0, burn_cpu, NULL, 0, NULL);
    CreateThread(NULL, 0, burn_ram, NULL, 0, NULL);

    while (1) {
    }

    return 0;
}