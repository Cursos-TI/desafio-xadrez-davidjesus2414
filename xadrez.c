#include <stdio.h>

void movertorre(int casas){
    if(casas > 0) {
        printf("A Torre, moveu uma casa para Direita!\n");
        movertorre(casas - 1);
    }
}

int main() {
    
    int movertorre = 5;

    return 0;
}



    