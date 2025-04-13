/*
**    Função : Cadastro de Alunos com Expansão Dinâmica
**    Autor : José carlos da Silva júnior - Turma F
**    Data  : 12/04/2025
**    Observações: Usa realloc para adicionar alunos dinamicamente, imprime de forma recursiva e libera memória.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 100

typedef struct {
    char nome[MAX_NOME];
    int idade;
    float nota;
} Aluno;

void imprimir_alunos(Aluno *alunos, int n, int index) {
    if (index >= n) return;

    printf("Nome: %s\nIdade: %d\nNota: %.2f\n\n", alunos[index].nome, alunos[index].idade, alunos[index].nota);
    imprimir_alunos(alunos, n, index + 1);
}

float calcular_media(Aluno *alunos, int n) {
    float soma = 0;

    for (int i = 0; i < n; i++) soma += alunos[i].nota;
    return n ? soma / n : 0;
}

int main() {
    int n;

    printf("Digite o numero de alunos: ");
    scanf("%d", &n);

    getchar();

    Aluno *alunos = (Aluno *)malloc(n * sizeof(Aluno));

    for (int i = 0; i < n; i++) {
        printf("Aluno %d\n", i + 1);
        printf("Nome: ");

        fgets(alunos[i].nome, MAX_NOME, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Idade: ");
        scanf("%d", &alunos[i].idade);

        printf("Nota: ");
        scanf("%f", &alunos[i].nota);

        getchar();
    }

    int mais;

    printf("Deseja adicionar mais alunos? Quantos: ");
    scanf("%d", &mais);
    getchar();

    alunos = realloc(alunos, (n + mais) * sizeof(Aluno));

    for (int i = n; i < n + mais; i++) {
        printf("Aluno %d\n", i + 1);
        printf("Nome: ");

        fgets(alunos[i].nome, MAX_NOME, stdin);

        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Idade: ");
        scanf("%d", &alunos[i].idade);

        printf("Nota: ");
        scanf("%f", &alunos[i].nota);

        getchar();
    }

    n += mais;

    printf("\n-- Lista de Alunos --\n");
    imprimir_alunos(alunos, n, 0);

    printf("Media das notas: %.2f\n", calcular_media(alunos, n));

    free(alunos);
    return 0;
}