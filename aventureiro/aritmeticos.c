#include <stdio.h>

int main() {

    int n1, n2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    soma = n1 + n2;
    subtracao = n1 - n2;
    multiplicacao = n1 * n2;
    divisao = n1 / n2;

    printf("\nA soma dos números é: %d\n", soma);
    printf("A subtração dos números é: %d\n", subtracao);
    printf("A multiplicação dos números é: %d\n", multiplicacao);
    printf("A divisão dos números é: %d\n", divisao);

    return 0;
}