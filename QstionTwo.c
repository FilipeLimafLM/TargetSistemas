#include <stdio.h> 

int pertenceFibonacci(int n){ //Função para verificar se o número está na sequencia Fibonacci

    int a = 0, b =1; //Vlr inicial da sequencia Fibonacci

    if( n==0 || n==1 ){ 
        return 1;
    }

    int fib;
    while( b < n ){ //Gera a sequencia até o termo ser igual ao número de Input
        fib = a + b;
        a = b;
        b = fib;
    }

    if (b == n) { //Se o número informado for igual ao ultimo número calculado ele pertence a sequencia
        return 1;
    }
    return 0; //Se não for igual, então ele não pertence a sequencia.

}

int main(){

    int num;

    printf("Informe um numero: "); //Pede um input ao usuário
    scanf("%d", &num);


    if(pertenceFibonacci(num)){ //Imprime o output do resultado gerado na função pertenceFibonacci
        printf("O numero %d pertence a sequencia de Fibonacci.\n", num);
    } else {
        printf("O numero %d nao pertence a sequencia de Fibonacci.\n", num);
    }
    return 0;

}