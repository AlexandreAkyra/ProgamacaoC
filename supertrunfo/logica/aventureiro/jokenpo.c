#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    int rng_jogador, rng_cpu;
    char cpu[10], jogador[10];
    
    srand(time(0));
    rng_cpu = rand() % 3;
    rng_cpu++;
    
    printf("Menu do Jokenpô\n");
    printf("1: Pedra\n");
    printf("2: Papel\n");
    printf("3: Tesoura\n");
    printf("Digite a opção desejada\n");
    scanf("%d", &rng_jogador);
    
    switch (rng_cpu) {
        case 1:
            strcpy(cpu, "Pedra");
            break;
        case 2:
            strcpy(cpu, "Papel");
            break;
        case 3:
            strcpy(cpu, "Tesoura");
            break;
        }

    switch (rng_jogador) {
        case 1:
            strcpy(jogador, "Pedra");
            break;
        case 2:
            strcpy(jogador, "Papel");
            break;
        case 3:
            strcpy(jogador, "Tesoura");
            break;
        }

    if (rng_jogador == rng_cpu) {
        printf("Você jogou %s e a CPU %s deu empate", jogador, cpu);
    } else if (rng_jogador == 1 && rng_cpu == 3) {
        printf("Você jogou %s e a CPU %s você ganhou", jogador, cpu);
    } else if (rng_jogador == 2 && rng_cpu == 1) {
        printf("Você jogou %s e a CPU %s você ganhou", jogador, cpu);
    } else if (rng_jogador == 3 && rng_cpu == 2) {
        printf("Você jogou %s e a CPU %s você ganhou", jogador, cpu);
    } else {
        printf("Você jogou %s e a CPU %s você perdeu", jogador, cpu);
    }
}