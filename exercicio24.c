#include<stdio.h>

main(){
    int aluno[10];
    int numeroMaiorAluno, numeroMenorAluno;
    float altura[10];
    float maiorAluno, menorAluno; 

    for(int i = 0; i < 10; i++){
        printf("\nNumero do aluno: ");
        scanf("%d", &aluno[i]);

        printf("Digite a altura do aluno %d -->", aluno[i]);
        scanf("%f", &altura[i]);
        
    } 
    maiorAluno = altura[0];
    menorAluno = altura[0];
    numeroMaiorAluno = aluno[0];
    numeroMenorAluno = aluno[0];

    for(int i = 0; i < 10; i++){
        if(altura[i] > maiorAluno){
            maiorAluno = altura[i];
            numeroMaiorAluno = aluno[i];
        }
        if(altura[i] < menorAluno){
            menorAluno = altura[i];
            numeroMenorAluno = aluno[i];
        }
    }
    printf("\nMaior Aluno %d, Altura %.2f", numeroMaiorAluno, maiorAluno);
    printf("\nMenor Aluno %d, Altura %.2f", numeroMenorAluno, menorAluno);
}

   

    

            


