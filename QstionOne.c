#include <stdio.h>  

int main() {
    int INDICE = 13, SOMA = 0, K = 0; //Declaração de variáveis

    while (K < INDICE) { //Estrutura de repetição para acrescentar na soma 
        K = K + 1;
        SOMA = SOMA + K;
    }

    printf("SOMA = %d\n", SOMA); //Output do resultado na tela

    return 0;
}
