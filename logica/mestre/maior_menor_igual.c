#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jogador, cpu, resultado;
    srand(time(0));
    
    printf("Digite um número de 1 a 10 para jogar contra a cpu\n");
    scanf("%d", &jogador);

    cpu = rand() % 10 + 1;

    printf("-----------------------------\n");
    printf("Seu número é %d\n", jogador);
    printf("O número da cpu é %d", cpu);
    printf("\n-----------------------------\n");

    if (jogador > cpu) {
        resultado = 1;
    } else if(jogador < cpu) {
        resultado = 2;
    } else {
        resultado = 3;
    }

    switch (resultado)
    {
    case 1:
        printf("Seu número é maior\n");
        printf("-----------------------------\n");
        break;
    case 2:
        printf("Seu número é menor\n");
        printf("-----------------------------\n");
        break;
    case 3:
        printf("Os numeros são iguais\n");
        printf("-----------------------------\n");
        break;
    default:
        break;
    }

}