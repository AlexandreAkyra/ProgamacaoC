#include <stdio.h>

int main() {

    int idade = 18;
    float altura = 1.75;
    double salario = 1412.65;
    char inicial = 'A';
    char nome[24] = "Alexandre";

    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Salário: R$%.2f\n", salario);
    printf("Inicial: %c\n", inicial);
    printf("Nome: %s\n", nome);

    printf("\nQual sua idade: ");
    scanf("%d", &idade);
    printf("Idade: %d\n", idade);
    
    printf("Qual sua altura: ");
    scanf("%f", &altura);
    printf("Altura: %.2f\n", altura);

    printf("Qual seu salário: ");
    scanf("%f", &salario);
    printf("Salário: R$%.2f\n", salario);


    return 0;
}