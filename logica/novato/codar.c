#include <stdio.h>

int main() {    
    float temperatura, umidade;
    unsigned int estoque;

    printf("Informe a temperatura: ");
    scanf("%f", &temperatura);
    printf("Informe a umidade: ");
    scanf("%f", &umidade);
    printf("Informe o estoque: ");
    scanf("%u", &estoque);

    if (temperatura > 40) {
        printf("A temperatura está muito alta\n");
    } else {
        printf("A temperatura está normal\n");
    }

    if (umidade > 50) {
        printf("A umidade está muito alta\n");
    } else {
        printf("A umidade está normal\n");
    }

    if (estoque < 500) {
        printf("O estoque está muito baixo\n");
    } else {
        printf("O estoque está normal\n");
    }
}