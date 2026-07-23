#include <stdio.h>


void moverbispo(int casasbispo) {
    if(casasbispo > 0) {
        printf("O Bispo, moveu uma casa para Cima!\n");
        printf("O Bispo, moveu uma casa para Direita!\n");
        moverbispo(casasbispo - 1);
    }
}

void moverrainha(int casasrainha) {
    if(casasrainha > 0) {
        printf("A Rainha, moveu uma casa para Esquerda!\n");
        moverrainha(casasrainha - 1);
    }
}

void movertorre(int casastorre) {
    if(casastorre > 0) {
        printf("A Torre, moveu uma casa para Direita!\n");
        movertorre(casastorre - 1);
    }
}

int main() {
    
    //VARIAVEIS    

    int casastorre = 5;
    int casasrainha = 8;
    int casasbispo = 5;
    int cavalo = 1;

    
    //MOVIMENTACAO DAS PEÇAS

    printf("\n========MOVIMENTACAO DA TORRE========\n");
    printf("\n");

    movertorre(casastorre);
    printf("\nA TORRE, MOVEU %d CASAS PARA DIREITA! \n", casastorre);

    printf("\n========MOVIMENTACAO DA RAINHA========\n");
    printf("\n");

    moverrainha(casasrainha);
    printf("\nA RAINHA, MOVEU %d CASAS PARA ESQUERDA! \n", casasrainha);

    printf("\n========MOVIMENTACAO DO BISPO========\n");
    printf("\n");

    moverbispo(casasbispo);
    printf("\nO BISPO, MOVEU %d CASAS PARA DIAGONAL DIREITA CIMA! \n", casasbispo);
    printf("\n");

    printf("\n========MOVIMENTACAO DA CAVALO========\n");
    printf("\n");

    while (cavalo--){

        for(int i = 0; i < 2; i++){
            printf("O Cavalo andou para Cima\n");
        }
        printf("Cavalo andou para direita\n");

    printf("\nO CAVALO ANDOU EM L PARA CIMA!\n");
    }


    
 
    return 0;
}