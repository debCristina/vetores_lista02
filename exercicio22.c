#include<stdio.h>

main(){

    int primeiroVetor[10];
    int segundoVetor[10];
    int terceiroVetor[20];
    int c1=0;
    int c2 = 0;
    
    for (int i = 0; i < 10; i++){
        printf("Digite o valor do primeiro vetor: ");
        scanf("%d", &primeiroVetor[i]);

    }

    for (int i = 0; i < 10; i++){
        printf("Digite o valor do segundo vetor: ");
        scanf("%d", &segundoVetor[i]);

    }
    
    for(int i = 0; i < 20; i++){
        if(i == 0){
            terceiroVetor[i] = primeiroVetor[i];
        }
        if(i%2 == 0){
            terceiroVetor[i] = primeiroVetor[c1];
            c1++;
        }else{
            terceiroVetor[i] = segundoVetor[c2];
            c2++;
        }
        printf("%d ", terceiroVetor[i]);
    }

    // for (int i = 0; i <10; i++){
        // printf("%d ", terceiroVetor[i]);
    // }
    






}