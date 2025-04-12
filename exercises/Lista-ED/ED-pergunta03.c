/*
**    Função : Matriz Dinâmica com Structs
**    Autor : José carlos da Silva júnior - Turma F
**    Data  : 12/04/2025
**    Observações: Aloca matriz dinamicamente com struct, soma elementos e libera memória.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int linhas;
    int colunas;
    int **matriz;
} InfoMatriz;

int somar_elementos(InfoMatriz *info) {
    int soma = 0;

    for (int i = 0; i < info->linhas; i++) {
        for (int j = 0; j < info->colunas; j++) {
            soma += info->matriz[i][j];
        }
    }

    return soma;
}

void liberar_matriz(InfoMatriz *info) {
    for (int i = 0; i < info->linhas; i++) {
        free(info->matriz[i]);
    }

    free(info->matriz);
}

int main() {
    InfoMatriz info;
    printf("Digite o numero de linhas e colunas: ");
    scanf("%d %d", &info.linhas, &info.colunas);

    info.matriz = (int **)malloc(info.linhas * sizeof(int *));

    for (int i = 0; i < info.linhas; i++) {
        info.matriz[i] = (int *)malloc(info.colunas * sizeof(int));
    }

    printf("\nDigite os elementos da matriz:\n");

    for (int i = 0; i < info.linhas; i++) {
        for (int j = 0; j < info.colunas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &info.matriz[i][j]);
        }
    }

    printf("\nSoma dos elementos: %d\n", somar_elementos(&info));

    liberar_matriz(&info);
    return 0;
}
