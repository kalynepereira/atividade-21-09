#include <stdio.h>
#include <stdlib.h>

typedef struct frutas {
    char nome[100];
    float preco;
} Fruta;

int main(void) {
    Fruta fruta;
    FILE * arq;
    char continuar;

    arq = fopen("frutas.txt", "w");
       if( arq == NULL){
         printf("Nao possivel gerar aquivo");
        exit(1);
    }
    do{
        
        printf("\n cadastro de frutas:\n");

        printf("Digite o nome da fruta: ");
        scanf(" %[^\n]", fruta.nome);

        printf("Digite o valor da fruta:");
        scanf ("%f", &fruta.preco);

        fprintf(arq, "%s,%.2f\n", fruta.nome, fruta.preco);
         
        printf("\n fruta cadastrada com sucesso;\n");

        printf("Deseja cadastra outra fruta? (s/n)");
        scanf(" %c", &continuar);
        while (getchar() != '\n');

    } while (continuar == 's' || continuar == 'S');

      fclose(arq);

       printf("\nCadastro encerrado!\n");
    printf("Os dados foram salvos no arquivo frutas.txt\n");

    return 0;
}
