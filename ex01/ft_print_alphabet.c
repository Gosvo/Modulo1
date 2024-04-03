#include <unistd.h>

void ft_print_alphabet() {
    char letra = 'a';

    while (letra <= 'z') {
        write(1, &letra, 1); 
        letra++; // Hace que avance la letra en orden ascendente
    }

    write(1, "\n", 1); // Este es un salto de linea 
}

int main() {
    ft_print_alphabet();
    return 0;
}
