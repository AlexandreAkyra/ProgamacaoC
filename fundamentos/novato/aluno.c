#include <stdio.h>

int main() {
    int matricula, idade;
    float altura;
    char nome[20];

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua matricula: ");
    scanf("%d", &matricula);

    printf("\nNúmero da matricula: %d\n", matricula);
    printf("Nome do aluno: %s\n", nome);
    printf("Idade do aluno: %d\n", idade);
    printf("Altura do aluno: %.2f", altura);
}