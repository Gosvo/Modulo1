#include <unistd.h>

void display_combinations() {
    
int i = '0';
int j;
int k;

    while (i <= '7' ) {
        j = i + 1;
        while (j <= '8') {
            k = j + 1;
            while (k <= '9') {
                write (1, &i, 1);
                write (1, &j, 1);
                write (1, &k, 1);
                write (1, ", ",2);
                k++;
            }
            j++;
        } 
        i++;

    
    }
}

int main() {
    display_combinations();
    return 0;
}
