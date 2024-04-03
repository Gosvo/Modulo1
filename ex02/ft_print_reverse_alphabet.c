#include <unistd.h>

void ft_print_reverse_alphabet() {
    char letra = 'z';

    while (letra >= 'a') {
        write(1, &letra, 1); 
        letra--; // Hace que retroceda a la letra anterior
    }

    write(1, "\n", 1); // Este es un salto de linea 
}

int main() {
    ft_print_reverse_alphabet();
    return 0;
}