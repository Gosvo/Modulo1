#include <stdio.h>

void display_combinations() {
    for (int i = 0; i <= 7; i++) {
        for (int j = i + 1; j <= 8; j++) {
            for (int k = j + 1; k <= 9; k++) {
                printf("%d%d%d\n", i, j, k);
            }
        }
    }
}

int main() {
    display_combinations();
    return 0;
}
