#include <stdio.h>

int main() {
    int idade;

    printf("------------------------\n");
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("------------------------\n");
    printf("%s\n", idade < 12 ? "Criança" : idade < 18 ? "Adolescente" : idade < 60 ? "Adulto" : "Idoso");
    printf("------------------------\n");

    printf("Muito obrigado pelo desafio gpt\n");
}