#include <stdio.h>   // Para entrada e saída
#include <stdlib.h>  // Para funções como rand() e srand()
#include <time.h>    // Para usar time() como semente para srand()

int main() {
    int opcao,numero_cpu,numero_jogador;
    
    printf("Menu do jogo!\n");
    printf("1: Iniciar o jogo\n");
    printf("2: Regras do jogo\n");
    printf("3: Sair do jogo\n");
    printf("Digite a opção desejada: \n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Escolha um número entre 0 e 9 para jogar: ");
            scanf("%d", &numero_jogador);
            
            srand(time(0));
            numero_cpu = rand() % 10;
            printf("Número gerado pela CPU: %d\n", numero_cpu);

            if (numero_cpu == numero_jogador) {
                printf("Parabéns, Voce adivinhou o número sorteado");
            } else {
                printf("Infelizmente não desta vez, boa sorte na próxima");
            }

            break;
        case 2:
            printf("Regras:\n");
            printf("Digite um numero de 0 a 9\n");
            printf("Se o seu número for igual ao da cpu você ganha o jogo\n");
            printf("Caso seu número não seja igual ao da cpu você perde o jogo\n");
            break;
        case 3:
            printf("Saindo do jogo...");
            break;
        default:
            printf("Opção inválida.");
    }
}