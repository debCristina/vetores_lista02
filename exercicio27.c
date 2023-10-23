#include<stdio.h>

main(){
    int vetor[10];
    int contadorPrimo=0;

    for(int i =0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 10; i++){
        contadorPrimo=0;
        for(int j = 1; j <= vetor[i]; j++) {
            if(vetor[i] % j == 0) {
                contadorPrimo++;
            }
        }
        if (contadorPrimo == 2) {
            printf("\nNumero primo:%d Posicao:%d", vetor[i], i);
        }
    }
}

