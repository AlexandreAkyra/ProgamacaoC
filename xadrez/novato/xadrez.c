
#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    //Declaraçao de variáveis
    int bispo, opcao;
    int rainha = 1, torre = 1;

    //Menu interativo para o usuário 
    printf("Bem vindo ao xadrez\n");
    printf("1: Bispo\n");
    printf("2: Torre\n");
    printf("3: Rainha\n");
    printf("4: Sair do programa\n");
    printf("Escolha a peça que você deseja movimentar ou sair do programa:\n");
    scanf("%d", &opcao);

    //Switch para organizar a escolha feita pelo usuário
    switch (opcao){
        case 1: // Case 1 executa a movimentação do bispo para cima direita 5 vezes
            for(bispo = 1; bispo <= 5; bispo++) {
            printf("Cima direita\n");
            }
            break;
        case 2: // Case 2 executa a movimentação da torre para direita 5 vezes
            do {
                printf("Direita\n");
                torre++;
            } while (torre <= 5);
            break;
        case 3: // Case 3 executa a movimentação da rainha para esquerda 8 vezes
            while (rainha <= 8) {
                printf("Esquerda\n");
                rainha++;
            }
            break;
        case 4: // Fim da execução do programa
            printf("Saindo do programa..\n");
            break;
        default:
            printf("Opção Invalida");
            break;
    }

    return 0;
}
