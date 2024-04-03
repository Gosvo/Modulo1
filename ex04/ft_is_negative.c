#include <unistd.h>

void ft_is_negative(int n) {
    char sign;

    if(n < 0) {
        sign = 'N';
    } else{
        sign = 'P';
    }

    write(1, &sign, 1);

}

int main() {
    int number = -8;
    ft_is_negative(number);
    return 0;
} 