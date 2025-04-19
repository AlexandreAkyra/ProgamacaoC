#include <stdio.h>

int main() {
    short int numero_pequeno = 32767; // tamanho maximo do short int
    printf("Número pequeno: %d\n", numero_pequeno);
    numero_pequeno = 32768;
    printf("Número pequeno atualizado: %d\n", numero_pequeno);
}