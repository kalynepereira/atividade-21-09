#include <stdio.h> 
#include <stdlib.h>

typedef struct aluno{ 
    char nome[100]; 
    float nota1; 
    float nota2; 
    }Alunos; 
    int main (void){ 
        Aluno alunos; 
        int n, i; 
        FILE * arq
        
        printf("Digite a quantidade de alunos"); 
        scanf("%d, &n");
        arq = fopen("aluno.txt", "w"); 
        if(arq == NULL){ 
            printf("Nao foi possivel criar o arquivo."); 
            exit(1);
        }
        for(i = 0; i<n; i++){ printf("\nAluno %d\n",i +1);
        printf ("Digite seu nome:"); 
        scanf("%[^\n]",aluno.nome); 
        printf ("Digite sua nota 1:"); 
        scanf("%f",aluno.&nota1); 
        printf ("Digite sua nota 2:"); 
        scanf("%f",aluno.&nota2);
        
        }


        fprintf(arq, "nome: %s\n", aluno.nome); 
        fprintf(arq, "nota 1: %.2f\n", aluno.nota1); 
        fprintf(arq, "nota 2: %.2f\n", aluno.nota2); 
        fprintf(arq, "-------------------\n"); 
        fclose (arq);

        printf (|"Os dados foram salvos com sucesso.txt\n");
        return 0; }
