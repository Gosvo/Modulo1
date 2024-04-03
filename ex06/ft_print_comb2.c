#include <stdio.h>

void display_combinations() {
    for (int i = 0; i <= 99; i++) {
        for (int j = i; j <= 99; j++) {
            printf("%02d %02d\n", i, j);
        }
    }
}

int main() {
    display_combinations();
    return 0;
}
