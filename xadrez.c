#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    int torre,bispo,rainha;

    printf("\n========MOVIMENTACAO DA TORRE========\n");


    for (torre = 0; torre < 5; torre++){
            printf("A Torre, moveu uma casa para Direita!\n");
        }
        printf("\n### A Torre Andou 5 Casas para Direita! ###\n");

    printf("\n========MOVIMENTACAO DO BISPO========\n");

    for (bispo = 0; bispo < 5; bispo++){
        printf("Bispo andou uma casa para cima e depois uma casa para Direita!\n");
    }
        printf("\n### O Bispo Andou 5 Casas, Na diagonal para Direita! ###\n");
 
    printf("\n========MOVIMENTACAO DA RAINHA========\n");

    for (rainha = 0; rainha < 8; rainha++){
        printf("A Rainha, moveu uma casa para Esquerda!\n");
    }
        printf("\n### A Rainha Andou 8 casas para Esquerda! ###\n");

    return 0;
}
