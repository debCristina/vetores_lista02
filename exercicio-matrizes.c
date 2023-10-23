#include<stdio.h>

main(){

    char nomeAluno[3][60];
    float notas[3][3];
    float mediaAlunoA=0, mediaAlunoB=0, mediaAlunoC=0;
    float soma;


    for(int i = 0; i < 3; i++){
        soma = 0;

        printf("\nNome do aluno: ");
        fgets(nomeAluno[i], 60, stdin);
        fflush(stdin);

        for(int j = 0; j < 3; j++){
            printf("Digite a %d nota de %s -->",j+1, nomeAluno[i]);
            scanf("%f", &notas[i][j]);
            fflush(stdin);
            soma += notas[i][j];
        }
        if(i == 0){
            mediaAlunoA = soma / 3;
        }else if(i == 1){
            mediaAlunoB = soma / 3;
        }else{
            mediaAlunoC = soma / 3;
        }
    }

    printf("\nMedia de %s: %f", nomeAluno[0], mediaAlunoA);
    printf("\nMedia de %s: %f", nomeAluno[1], mediaAlunoB);
    printf("\nMedia de %s: %f", nomeAluno[2], mediaAlunoC);
}
    
    